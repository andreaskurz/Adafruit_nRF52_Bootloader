MCU_SUB_VARIANT = nrf52840
SD_VERSION = 7.3.0

$(info    )
$(info    To program the bootloader into the board use:)
$(info    nrfjprog -f nrf52 -c 24000 --sectoranduicrerase --program _build/build-tiac_coffeecaller/tiac_coffeecaller_bootloader-0.9.2-15-gb5d9a5f_s140_7.3.0.hex --reset)
$(info    )
