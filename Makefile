PROJ_DIR	:= /home/jaguar/Embedded_Rel/Makefile_type_projects/STM32F407VG_makefilebased_Audio_proj
DEBUG_DIR	:= $(PROJ_DIR)/Debug
lib_cmsis	:= Drivers/CMSIS
lib_hal		:= Drivers/STM32f4xx_hal_drivers/Src
libraries	:= $(lib_cmsis) $(lib_hal)
applic		:= Application/Src
audio_rec	:= Debug


.PHONY: all $(audio_rec) $(applic) $(libraries)

all: debug  $(audio_rec)

debug:
	rm -Rf $(DEBUG_DIR)
	mkdir -p $(DEBUG_DIR)
	cp Debug_Makefile $(DEBUG_DIR)/Makefile
	cp STM32F407VGTX_RAM.ld $(DEBUG_DIR)/STM32F407VGTX_RAM.ld

$(audio_rec) $(applic) $(libraries):
	$(MAKE) --directory=$@

$(audio_rec):	$(applic)
$(applic):		$(libraries)
$(lib_hal):		$(lib_cmsis)


