/*
 *  ======== ti_drivers_config.h ========
 *  Configured TI-Drivers module declarations
 *
 *  The macros defines herein are intended for use by applications which
 *  directly include this header. These macros should NOT be hard coded or
 *  copied into library source code.
 *
 *  Symbols declared as const are intended for use with libraries.
 *  Library source code must extern the correct symbol--which is resolved
 *  when the application is linked.
 *
 *  DO NOT EDIT - This file is generated for the CC3220SF_LAUNCHXL
 *  by the SysConfig tool.
 */
#ifndef ti_drivers_config_h
#define ti_drivers_config_h

#define CONFIG_SYSCONFIG_PREVIEW

#define CONFIG_CC3220SF_LAUNCHXL
#ifndef DeviceFamily_CC3220
#define DeviceFamily_CC3220
#endif

#include <ti/devices/DeviceFamily.h>

#include <stdint.h>

/* support C++ sources */
#ifdef __cplusplus
extern "C" {
#endif


/*
 *  ======== GPIO ========
 */

/* P03 */
extern const uint_least8_t          CONFIG_GPIO_0_CONST;
#define CONFIG_GPIO_0               0
/* P05 */
extern const uint_least8_t          CONFIG_GPIO_1_CONST;
#define CONFIG_GPIO_1               1
/* P06 */
extern const uint_least8_t          CONFIG_GPIO_2_CONST;
#define CONFIG_GPIO_2               2
/* P07 */
extern const uint_least8_t          CONFIG_GPIO_3_CONST;
#define CONFIG_GPIO_3               3
/* P08 */
extern const uint_least8_t          CONFIG_GPIO_4_CONST;
#define CONFIG_GPIO_4               4
/* P18 */
extern const uint_least8_t          CONFIG_GPIO_5_CONST;
#define CONFIG_GPIO_5               5
/* P21 */
extern const uint_least8_t          CONFIG_GPIO_6_CONST;
#define CONFIG_GPIO_6               6
/* P45 */
extern const uint_least8_t          CONFIG_GPIO_7_CONST;
#define CONFIG_GPIO_7               7
/* P50 */
extern const uint_least8_t          CONFIG_GPIO_8_CONST;
#define CONFIG_GPIO_8               8
/* P04, LaunchPad User Button SW2 (left) */
extern const uint_least8_t          CONFIG_GPIO_BUTTON_0_CONST;
#define CONFIG_GPIO_BUTTON_0        9
/* P15, LaunchPad User Button SW3 (right) */
extern const uint_least8_t          CONFIG_GPIO_BUTTON_1_CONST;
#define CONFIG_GPIO_BUTTON_1        10
/* P64, LaunchPad LED D10 (Red) */
extern const uint_least8_t          CONFIG_GPIO_LED_0_CONST;
#define CONFIG_GPIO_LED_0           11
/* P01, LaunchPad LED D9 (Yellow) */
extern const uint_least8_t          CONFIG_GPIO_LED_1_CONST;
#define CONFIG_GPIO_LED_1           12
/* P02, LaunchPad LED D8 (Green) */
extern const uint_least8_t          CONFIG_GPIO_LED_2_CONST;
#define CONFIG_GPIO_LED_2           13

/* LEDs are active high */
#define CONFIG_GPIO_LED_ON  (1)
#define CONFIG_GPIO_LED_OFF (0)

#define CONFIG_LED_ON  (CONFIG_GPIO_LED_ON)
#define CONFIG_LED_OFF (CONFIG_GPIO_LED_OFF)


/*
 *  ======== PWM ========
 */

/* P01, LaunchPad LED D9 (Yellow) */
extern const uint_least8_t          CONFIG_PWM_0_CONST;
#define CONFIG_PWM_0                0
/* P02, LaunchPad LED D8 (Green) */
extern const uint_least8_t          CONFIG_PWM_1_CONST;
#define CONFIG_PWM_1                1


/*
 *  ======== Timer ========
 */

extern const uint_least8_t          CONFIG_TIMER_0_CONST;
#define CONFIG_TIMER_0              0
extern const uint_least8_t          CONFIG_TIMER_1_CONST;
#define CONFIG_TIMER_1              1
extern const uint_least8_t          CONFIG_TIMER_2_CONST;
#define CONFIG_TIMER_2              2

/*
 *  ======== Board_init ========
 *  Perform all required TI-Drivers initialization
 *
 *  This function should be called once at a point before any use of
 *  TI-Drivers.
 */
extern void Board_init(void);

/*
 *  ======== Board_initGeneral ========
 *  (deprecated)
 *
 *  Board_initGeneral() is defined purely for backward compatibility.
 *
 *  All new code should use Board_init() to do any required TI-Drivers
 *  initialization _and_ use <Driver>_init() for only where specific drivers
 *  are explicitly referenced by the application.  <Driver>_init() functions
 *  are idempotent.
 */
#define Board_initGeneral Board_init

#ifdef __cplusplus
}
#endif

#endif /* include guard */
