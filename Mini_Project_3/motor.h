/*
 * motor.h
 *
 *  Created on: Oct 8, 2021
 *      Author: TOSHIBA PC
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "gpio.h"
#include "common_macros.h"
#include "timer0.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define Motor_PORT_ID PORTB_ID

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/

typedef enum
{
	STOP,CW,A_CW
}DcMotor_State;



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void DcMotor_Init(void);

void DcMotor_Rotate(DcMotor_State state,uint8 speed);




#endif /* MOTOR_H_ */
