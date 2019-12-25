PROJ_DIR=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32F407VG_makefilebased_Audio_proj
CROSS_COMPILE=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32cubeIDE_toolcahin/tools/bin/arm-none-eabi-
CC=${CROSS_COMPILE}gcc

DEBUG_DIR=$(PROJ_DIR)/Debug

INCL_PATH= -I$(PROJ_DIR)/Drivers/STM32f4xx_hal_drivers/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Core/Include -I$(PROJ_DIR)/Drivers/CMSIS/Device/STM32F4xx/Inc


all: debug startup_stm32f407vgtx.o

debug:
		#mkdir -p $(DEBUG_DIR)/Application
		#ls -ltr $(DEBUG_DIR)

startup_stm32f407vgtx.o:	startup_stm32f407vgtx.s
		$(CC) -c  startup_stm32f407vgtx.s  -o $(DEBUG_DIR)/startup_stm32f407vgtx.o




