#include "drivers/peripherals.h"

#include "drivers/adc/adc_drv.h"
#include "drivers/can/can_drv.h"
#include "drivers/gpio/gpio_drv.h"
#include "drivers/lpuart/lpuart_drv.h"

void peripherals_init(void)
{
    gpio_drv_init();
    lpuart_drv_init();
    adc_drv_init();
    can_drv_init();
}
