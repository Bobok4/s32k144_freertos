################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../Sources/app/app.c \
../Sources/bsp/bsp_board.c \
../Sources/bsp/bsp_hooks.c \
../Sources/drivers/adc/adc_drv.c \
../Sources/drivers/can/can_drv.c \
../Sources/drivers/gpio/gpio_drv.c \
../Sources/drivers/lpuart/lpuart_drv.c \
../Sources/drivers/peripherals.c \
../Sources/main.c \
../Sources/tasks/task_startup.c

OBJS += \
./Sources/app/app.o \
./Sources/bsp/bsp_board.o \
./Sources/bsp/bsp_hooks.o \
./Sources/drivers/adc/adc_drv.o \
./Sources/drivers/can/can_drv.o \
./Sources/drivers/gpio/gpio_drv.o \
./Sources/drivers/lpuart/lpuart_drv.o \
./Sources/drivers/peripherals.o \
./Sources/main.o \
./Sources/tasks/task_startup.o

C_DEPS += \
./Sources/app/app.d \
./Sources/bsp/bsp_board.d \
./Sources/bsp/bsp_hooks.d \
./Sources/drivers/adc/adc_drv.d \
./Sources/drivers/can/can_drv.d \
./Sources/drivers/gpio/gpio_drv.d \
./Sources/drivers/lpuart/lpuart_drv.d \
./Sources/drivers/peripherals.d \
./Sources/main.d \
./Sources/tasks/task_startup.d


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '
