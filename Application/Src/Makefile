PROJ_DIR=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32F407VG_makefilebased_Audio_proj
CROSS_COMPILE=/home/jaguar/Embedded_Rel/Makefile_type_projects/STM32cubeIDE_toolcahin/tools/bin/arm-none-eabi-
CC=${CROSS_COMPILE}gcc

DEBUG_DIR=$(PROJ_DIR)/Debug

INCL_PATH= -I$(PROJ_DIR)/Drivers/STM32f4xx_hal_drivers/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Inc -I$(PROJ_DIR)/Drivers/CMSIS/Core/Include


all: debug main.o Audio_recording.o

debug:
		mkdir -p $(DEBUG_DIR)/Application
		#ls -ltr $(DEBUG_DIR)

main.o:	main.c
		$(CC) -c $(INCL_PATH)  main.c -o $(DEBUG_DIR)/Application/main.o

Audio_recording.o: Audio_recording.c
	$(CC) -c $(INCL_PATH)  Audio_recording.c -o $(DEBUG_DIR)/Application/Audio_recording.o




