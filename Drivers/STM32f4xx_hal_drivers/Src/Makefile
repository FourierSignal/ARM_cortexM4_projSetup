PROJ_DIR=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32F407VG_makefilebased_Audio_proj
CROSS_COMPILE=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32cubeIDE_toolcahin/tools/bin/arm-none-eabi-
CC=${CROSS_COMPILE}gcc

DEBUG_DIR=$(PROJ_DIR)/Debug

INCL_PATH= -I$(PROJ_DIR)/Drivers/STM32f4xx_hal_drivers/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Core/Include


all: debug stm32f4xx_hal_i2s.o stm32f4xx_hal_i2s_ex.o stm32f4xx_hal_rcc_ex.o stm32f4xx_hal_dma.o stm32f4xx_hal.o stm32f4xx_hal_cortex.o

debug:
		mkdir -p $(DEBUG_DIR)
		mkdir -p $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers
		#ls -ltR $(DEBUG_DIR)/

stm32f4xx_hal_i2s.o:	stm32f4xx_hal_i2s.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal_i2s.c  -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal_i2s.o

stm32f4xx_hal_rcc_ex.o:	stm32f4xx_hal_rcc_ex.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal_rcc_ex.c  -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal_rcc_ex.o

stm32f4xx_hal_i2s_ex.o: stm32f4xx_hal_i2s_ex.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal_i2s_ex.c -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal_i2s_ex.o

stm32f4xx_hal_dma.o:	stm32f4xx_hal_dma.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal_dma.c -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal_dma.o

stm32f4xx_hal.o:	stm32f4xx_hal.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal.c -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal.o

stm32f4xx_hal_cortex.o:	stm32f4xx_hal_cortex.c
	$(CC) -c $(INCL_PATH)  stm32f4xx_hal_cortex.c -o $(DEBUG_DIR)/Drivers/STM32f4xx_hal_drivers/stm32f4xx_hal_cortex.o
