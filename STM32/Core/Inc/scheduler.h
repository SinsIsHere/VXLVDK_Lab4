/*
 * scheduler.h
 *
 *  Created on: Nov 19, 2022
 *      Author: User
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#define SCH_MAX_TASKS 			40

#include "stdint.h"

void SCH_Add_Task (void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete_Task(const unsigned int TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */
