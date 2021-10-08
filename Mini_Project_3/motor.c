/*
 * motor.c
 *
 *  Created on: Oct 8, 2021
 *      Author: TOSHIBA PC
 */

#include "motor.h"

void DcMotor_Init(void)
{

	GPIO_setupPinDirection(Motor_PORT_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(Motor_PORT_ID,PIN1_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(Motor_PORT_ID,PIN3_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(PORTB_ID,PIN2_ID,PIN_INPUT);

	GPIO_writePin(Motor_PORT_ID, PIN0_ID, LOGIC_LOW);
	GPIO_writePin(Motor_PORT_ID, PIN1_ID, LOGIC_LOW);
	GPIO_writePin(Motor_PORT_ID, PIN2_ID, LOGIC_LOW);

}

void DcMotor_Rotate(DcMotor_State state,uint8 speed)
{
	uint8 duty_cycle=(uint8)((uint32)(speed*255)/100);
	GPIO_writePort(Motor_PORT_ID,state);
	PWM_Timer0_Init(duty_cycle);
}
