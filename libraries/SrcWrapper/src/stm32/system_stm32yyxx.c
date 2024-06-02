#ifdef STM32C0xx
  #include "system_stm32c0xx.c"
#elif STM32F0xx
  #include "system_stm32f0xx.c"
#elif STM32F1xx
  #include "system_stm32f1xx.c"
#elif STM32F2xx
  #include "system_stm32f2xx.c"
#elif STM32F3xx
  #include "system_stm32f3xx.c"
#elif STM32F4xx
  #include "system_stm32f4xx.c"
#elif STM32F7xx
  #include "system_stm32f7xx.c"
#elif STM32G0xx
  #include "system_stm32g0xx.c"
#elif STM32G4xx
  #include "system_stm32g4xx.c"
#elif STM32H5xx
  #include "system_stm32h5xx.c"
#elif STM32H7xx
  #include "system_stm32h7xx.c"
#elif STM32L0xx
  #include "system_stm32l0xx.c"
#elif STM32L1xx
  #include "system_stm32l1xx.c"
#elif STM32L4xx
  #include "system_stm32l4xx.c"
#elif STM32L5xx
  #include "system_stm32l5xx_ns.c"
#elif STM32MP1xx
  #include "system_stm32mp1xx.c"
#elif STM32U5xx
  #include "system_stm32u5xx.c"
#elif STM32WBAxx
  #include "system_stm32wbaxx.c"
#elif STM32WBxx
  #include "system_stm32wbxx.c"
#elif STM32WLxx
  #include "system_stm32wlxx.c"
#endif
