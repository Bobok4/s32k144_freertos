################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Sources/subdir.mk
-include SDK/rtos/FreeRTOS_S32K/Source/portable/MemMang/subdir.mk
-include SDK/rtos/FreeRTOS_S32K/Source/portable/GCC/ARM_CM4F/subdir.mk
-include SDK/rtos/FreeRTOS_S32K/Source/subdir.mk
-include SDK/platform/drivers/src/pins/subdir.mk
-include SDK/platform/drivers/src/interrupt/subdir.mk
-include SDK/platform/drivers/src/clock/S32K1xx/subdir.mk
-include SDK/platform/devices/S32K144/startup/subdir.mk
-include SDK/platform/devices/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include Project_Settings/Linker_Files/subdir.mk
-include Generated_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
freertos_s32k144_framework.siz \


# All Target
all: freertos_s32k144_framework.elf secondary-outputs

# Tool invocations
freertos_s32k144_framework.elf: $(OBJS) C:\NXP\S32DS_ARM_v2.2\S32DS\software\S32SDK_S32K1xx_RTM_3.0.0\platform\devices\S32K144\linker\gcc\S32K144_64_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "freertos_s32k144_framework.elf" "@freertos_s32k144_framework.args"  $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

freertos_s32k144_framework.siz: freertos_s32k144_framework.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley freertos_s32k144_framework.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
