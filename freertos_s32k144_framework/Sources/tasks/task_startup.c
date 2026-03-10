#include "tasks/task_startup.h"

#include "FreeRTOS.h"
#include "task.h"

#define TASK_STARTUP_STACK_SIZE    (configMINIMAL_STACK_SIZE + 128U)
#define TASK_STARTUP_PRIORITY      (tskIDLE_PRIORITY + 1U)
#define TASK_STARTUP_PERIOD_TICKS  pdMS_TO_TICKS(1000U)

static void task_startup_entry(void *taskParameter)
{
    (void)taskParameter;

    for (;;)
    {
        vTaskDelay(TASK_STARTUP_PERIOD_TICKS);
    }
}

BaseType_t task_startup_create(void)
{
    return xTaskCreate(task_startup_entry,
                       "startup",
                       TASK_STARTUP_STACK_SIZE,
                       NULL,
                       TASK_STARTUP_PRIORITY,
                       NULL);
}
