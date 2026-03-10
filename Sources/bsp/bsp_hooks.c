#include "FreeRTOS.h"
#include "task.h"

void vApplicationMallocFailedHook(void)
{
    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}

void vApplicationStackOverflowHook(TaskHandle_t pxTask, char *pcTaskName)
{
    (void)pxTask;
    (void)pcTaskName;

    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}

void vApplicationIdleHook(void)
{
}

void vApplicationTickHook(void)
{
}

void vMainConfigureTimerForRunTimeStats(void)
{
}

unsigned long ulMainGetRunTimeCounterValue(void)
{
    return 0UL;
}
