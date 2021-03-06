#if defined(COMPILE_FOR_STM32F4)
#include <stm32f4/stm32f4xx_crc.c>
#include <stm32f4/stm32f4xx_dbgmcu.c>
#include <stm32f4/stm32f4xx_flash.c>
#include <stm32f4/stm32f4xx_gpio.c>
#include <stm32f4/stm32f4xx_rcc.c>
#include <stm32f4/stm32f4xx_syscfg.c>
#include <stm32f4/stm32f4xx_tim.c>
#include <stm32f4/stm32f4xx_usart.c>
#elif defined(COMPILE_FOR_STM32F2)
#include <stm32f2/stm32f2xx_crc.c>
#include <stm32f2/stm32f2xx_dbgmcu.c>
#include <stm32f2/stm32f2xx_flash.c>
#include <stm32f2/stm32f2xx_gpio.c>
#include <stm32f2/stm32f2xx_rcc.c>
#include <stm32f2/stm32f2xx_syscfg.c>
#include <stm32f2/stm32f2xx_tim.c>
#include <stm32f2/stm32f2xx_usart.c>
#endif