/*
 * button.c
 *
 *  Created on: Nov 19, 2022
 *      Author: User
 */

#include "button.h"

int KeyGen0 = NORMAL_STATE;
int KeyGen1 = NORMAL_STATE;
int KeyGen2 = NORMAL_STATE;
int KeyGen3 = NORMAL_STATE;

int BUTTON_flag = 0;

int BUTTON_PRESSED() {
	if (BUTTON_flag == 1) {
		BUTTON_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput() {
	KeyGen0 = KeyGen1;
	KeyGen1 = KeyGen2;
	KeyGen2 = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);

	if ((KeyGen0 == KeyGen1) && (KeyGen1 == KeyGen2)) {
		if (KeyGen3 != KeyGen2) {
			KeyGen3 = KeyGen2;
			if (KeyGen2 == NORMAL_STATE) {
				//TODO
				BUTTON_flag = 1;
			}
		}
	}
}
