#include "app/app.h"

#include "FreeRTOS.h"
#include "task.h"

#include "bsp/bsp_board.h"
#include "drivers/peripherals.h"
#include "tasks/task_startup.h"

void rtos_start(void)
{
    bsp_board_init();
    peripherals_init();

    if (task_startup_create() != pdPASS)
    {
        taskDISABLE_INTERRUPTS();
        for (;;)
        {
        }
    }

    vTaskStartScheduler();

    taskDISABLE_INTERRUPTS();
    for (;;)
    {
    }
}
