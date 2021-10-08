/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: TOSHIBA PC
 */

#include "lcd.h"
#include "lm35_sensor.h"
#include "motor.h"
#include "adc.h"



int main(void)
{
	uint8 temp;

	 LCD_init();
	 DcMotor_Init();

	 ADC_ConfigType ADC_Config={INTERNAL,Prescaler_8};

	 ADC_init(&ADC_Config);

	while(1)
	{
		temp = LM35_getTemperature();


					LCD_moveCursor(0,4);
					if(temp<30)
					{
						DcMotor_Rotate(STOP, 0);
						LCD_displayString("Fan is off");
					}
					else if(temp>=30&&temp<60)
					{
						DcMotor_Rotate(CW, 25);

						LCD_displayString("Fan is on ");
					}
					else if(temp>=60&&temp<90)
					{
						DcMotor_Rotate(CW, 50);

						LCD_displayString("Fan is on ");
					}
					else if(temp>=90&&temp<120)
					{
						DcMotor_Rotate(CW, 75);

						LCD_displayString("Fan is on ");
					}
					else if(temp>=120)
					{
						DcMotor_Rotate(CW, 100);

						LCD_displayString("Fan is on ");

					}

					 //  Display the temperature value every time at same position
					LCD_moveCursor(1,4);
					LCD_displayString("Temp =");
					if(temp >= 100)
					{
						LCD_intgerToString(temp);
					}
					else
					{
						LCD_intgerToString(temp);
						// In case the digital value is two or one digits print space in the next digit place
						LCD_displayCharacter(' ');
					}
					LCD_displayString("C");

	}
	return 0;
}
