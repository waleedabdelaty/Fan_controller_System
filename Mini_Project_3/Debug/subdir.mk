################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../adc.c \
../gpio.c \
../lcd.c \
../lm35_sensor.c \
../main.c \
../motor.c \
../timer0.c 

OBJS += \
./adc.o \
./gpio.o \
./lcd.o \
./lm35_sensor.o \
./main.o \
./motor.o \
./timer0.o 

C_DEPS += \
./adc.d \
./gpio.d \
./lcd.d \
./lm35_sensor.d \
./main.d \
./motor.d \
./timer0.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


