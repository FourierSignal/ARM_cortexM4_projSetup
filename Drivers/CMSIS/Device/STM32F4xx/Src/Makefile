PROJ_DIR=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32F407VG_makefilebased_Audio_proj
CROSS_COMPILE=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32cubeIDE_toolcahin/tools/bin/arm-none-eabi-
CC=${CROSS_COMPILE}gcc



INCL_PATH= -I$(PROJ_DIR)/Drivers/CMSIS/Device/STM32F4xx/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Core/Include

all: debug system_stm32f4xx.o 

debug:
		mkdir -p $(DEBUG_DIR)
		mkdir -p $(DEBUG_DIR)/Drivers/CMSIS/Device/STM32F4xx
		#ls -ltR $(DEBUG_DIR)/

DEBUG_DIR=$(PROJ_DIR)/Debug
DEBUG_CMSIS_DIR	:= $(DEBUG_DIR)/Drivers/CMSIS


system_stm32f4xx.o:		system_stm32f4xx.c
	$(CC) -c $(INCL_PATH)  system_stm32f4xx.c  -o $(DEBUG_CMSIS_DIR)/Device/STM32F4xx/system_stm32f4xx.o
