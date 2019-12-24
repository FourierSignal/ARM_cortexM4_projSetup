#lib_cmsis	:= Drivers/CMSIS
lib_hal		:= Drivers/STM32f4xx_hal_drivers/Src
#libraries	:= $(lib_cmsis) $(lib_hal)
libraries	:= $(lib_hal)
applic		:= Application/Src
audio_rec	:= Debug


.PHONY: all $(audio_rec) $(applic) $(libraries)

all: $(audio_rec)

$(audio_rec) $(applic) $(libraries):
	$(MAKE) --directory=$@

$(audio_rec):	$(applic)
$(applic):		$(libraries)
#$(lib_hal):		$(lib_cmsis)


