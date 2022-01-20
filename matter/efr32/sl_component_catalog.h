#ifndef SL_COMPONENT_CATALOG_H
#define SL_COMPONENT_CATALOG_H

// APIs present in project
#define SL_CATALOG_BLUETOOTH_PRESENT
#define SL_CATALOG_DEVICE_INIT_NVIC_PRESENT
#define SL_CATALOG_EMLIB_CORE_DEBUG_CONFIG_PRESENT
#define SL_CATALOG_FREERTOS_KERNEL_PRESENT
#define SL_CATALOG_KERNEL_PRESENT
#define SL_CATALOG_SE_MANAGER_PRESENT
#define SL_CATALOG_BTN0_PRESENT
#define SL_CATALOG_SIMPLE_BUTTON_PRESENT
#define SL_CATALOG_BTN1_PRESENT
#define SL_CATALOG_LED0_PRESENT
#define SL_CATALOG_SIMPLE_LED_PRESENT
#define SL_CATALOG_LED1_PRESENT
#define SL_CATALOG_UARTDRV_USART_PRESENT

#if CHIP_DEVICE_CONFIG_ENABLE_SED
#define SL_CATALOG_POWER_MANAGER_PRESENT
#define SL_CATALOG_SLEEPTIMER_PRESENT
#endif

#if defined(EFR32MG24)
#define SL_CATALOG_MX25_FLASH_SHUTDOWN_EUSART_PRESENT
#else
#define SL_CATALOG_MX25_FLASH_SHUTDOWN_USART_PRESENT
#endif

#ifdef DISPLAY_ENABLED
#define SL_CATALOG_MEMLCD_USART_PRESENT
#endif

#if defined(EFR32MG21)
#define SL_CATALOG_RAIL_UTIL_RF_PATH_PRESENT
#endif

#endif // SL_COMPONENT_CATALOG_H
