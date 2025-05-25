#pragma once

#define _PINNUM(port, pin) ((port) * 32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER 2
#define LED_PRIMARY_PIN _PINNUM(1, 2)
#define LED_SECONDARY_PIN _PINNUM(1, 4)
#define LED_STATE_ON 0

#define LED_NEOPIXEL _PINNUM(0, 26)
#define NEOPIXELS_NUMBER 4
#define BOARD_RGB_BRIGHTNESS 0x040404

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER 2
#define BUTTON_1 _PINNUM(0, 12)
#define BUTTON_2 _PINNUM(1, 15)
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "TiaC"
#define BLEDIS_MODEL "coffeecaller"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

// Shared VID/PID with Feather nRF52840, will be disabled for building in the
// future
#define USB_DESC_VID 0x239A
#define USB_DESC_UF2_PID 0x00DA
#define USB_DESC_CDC_ONLY_PID 0x00DA

#define UF2_PRODUCT_NAME "TiaC CoffeeCaller"
#define UF2_BOARD_ID "tiac_coffeecaller"
#define UF2_VOLUME_LABEL "TiaCCoffee"
#define UF2_INDEX_URL                                                          \
  "https://www.nordicsemi.com/Software-and-Tools/Development-Kits/nRF52840-DK"
