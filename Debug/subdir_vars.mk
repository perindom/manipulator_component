################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../CC3220SF_LAUNCHXL_FREERTOS.cmd 

SYSCFG_SRCS += \
../pwmled2.syscfg 

C_SRCS += \
../claw_control.c \
../control_queue.c \
../debug.c \
../delay_queue.c \
../main_freertos.c \
../mqtt_client_app.c \
../mqtt_if.c \
../network_if.c \
../parsing_queue.c \
../publish_queue.c \
../publish_task.c \
./syscfg/ti_drivers_config.c \
../timer50.c 

GEN_FILES += \
./syscfg/ti_drivers_config.c 

GEN_MISC_DIRS += \
./syscfg/ 

C_DEPS += \
./claw_control.d \
./control_queue.d \
./debug.d \
./delay_queue.d \
./main_freertos.d \
./mqtt_client_app.d \
./mqtt_if.d \
./network_if.d \
./parsing_queue.d \
./publish_queue.d \
./publish_task.d \
./syscfg/ti_drivers_config.d \
./timer50.d 

OBJS += \
./claw_control.obj \
./control_queue.obj \
./debug.obj \
./delay_queue.obj \
./main_freertos.obj \
./mqtt_client_app.obj \
./mqtt_if.obj \
./network_if.obj \
./parsing_queue.obj \
./publish_queue.obj \
./publish_task.obj \
./syscfg/ti_drivers_config.obj \
./timer50.obj 

GEN_MISC_FILES += \
./syscfg/ti_drivers_config.h \
./syscfg/ti_utils_build_linker.cmd.exp \
./syscfg/syscfg_c.rov.xs 

GEN_MISC_DIRS__QUOTED += \
"syscfg\" 

OBJS__QUOTED += \
"claw_control.obj" \
"control_queue.obj" \
"debug.obj" \
"delay_queue.obj" \
"main_freertos.obj" \
"mqtt_client_app.obj" \
"mqtt_if.obj" \
"network_if.obj" \
"parsing_queue.obj" \
"publish_queue.obj" \
"publish_task.obj" \
"syscfg\ti_drivers_config.obj" \
"timer50.obj" 

GEN_MISC_FILES__QUOTED += \
"syscfg\ti_drivers_config.h" \
"syscfg\ti_utils_build_linker.cmd.exp" \
"syscfg\syscfg_c.rov.xs" 

C_DEPS__QUOTED += \
"claw_control.d" \
"control_queue.d" \
"debug.d" \
"delay_queue.d" \
"main_freertos.d" \
"mqtt_client_app.d" \
"mqtt_if.d" \
"network_if.d" \
"parsing_queue.d" \
"publish_queue.d" \
"publish_task.d" \
"syscfg\ti_drivers_config.d" \
"timer50.d" 

GEN_FILES__QUOTED += \
"syscfg\ti_drivers_config.c" 

C_SRCS__QUOTED += \
"../claw_control.c" \
"../control_queue.c" \
"../debug.c" \
"../delay_queue.c" \
"../main_freertos.c" \
"../mqtt_client_app.c" \
"../mqtt_if.c" \
"../network_if.c" \
"../parsing_queue.c" \
"../publish_queue.c" \
"../publish_task.c" \
"./syscfg/ti_drivers_config.c" \
"../timer50.c" 

SYSCFG_SRCS__QUOTED += \
"../pwmled2.syscfg" 


