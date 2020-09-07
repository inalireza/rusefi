/*
 * @file config/boards/kinetis/rusefi_hw_enums.h
 *
 * @date Jun 2, 2019
 * @author Andrey Belomutskiy, (c) 2012-2020
 * @author andreika <prometheus.pcb@gmail.com>
 */

#ifndef RUSEFI_HW_ENUMS_H_
#define RUSEFI_HW_ENUMS_H_

// todo: migrate/unify with pin_output_mode_e? rename? something is messy here
// this enum is currently only used for SPI pins
typedef enum __attribute__ ((__packed__)) {
// todo: here we have a rare example of stm32-specific enum, todo: make this not stm32 specific?
	PO_DEFAULT = 0,
	PO_OPENDRAIN = 4, // PAL_STM32_OTYPE_OPENDRAIN
	PO_PULLUP = 32, // PAL_STM32_PUDR_PULLUP
	PO_PULLDOWN = 64 // PAL_STM32_PUPDR_PULLDOWN
} pin_mode_e;

/**
 * Hardware pin. This enum is platform-specific.
 */
typedef enum __attribute__ ((__packed__)) {
	GPIO_UNASSIGNED = 0,
	GPIO_INVALID = 1,

	GPIOA_0 = 2,
	GPIOA_1 = 3,
	GPIOA_2 = 4,
	GPIOA_3 = 5,
	GPIOA_4 = 6,
	GPIOA_5 = 7,
	GPIOA_6 = 8,
	GPIOA_7 = 9,
	GPIOA_8 = 10,
	GPIOA_9 = 11,
	GPIOA_10 = 12,
	GPIOA_11 = 13,
	GPIOA_12 = 14,
	GPIOA_13 = 15,
	GPIOA_14 = 16,
	GPIOA_15 = 17,

	GPIOB_0 = 18,
	GPIOB_1 = 19,
	GPIOB_2 = 20,
	GPIOB_3 = 21,
	GPIOB_4 = 22,
	GPIOB_5 = 23,
	GPIOB_6 = 24,
	GPIOB_7 = 25,
	GPIOB_8 = 26,
	GPIOB_9 = 27,
	GPIOB_10 = 28,
	GPIOB_11 = 29,
	GPIOB_12 = 30,
	GPIOB_13 = 31,
	GPIOB_14 = 32,
	GPIOB_15 = 33,

	GPIOC_0 = 34,
	GPIOC_1 = 35,
	GPIOC_2 = 36,
	GPIOC_3 = 37,
	GPIOC_4 = 38,
	GPIOC_5 = 39,
	GPIOC_6 = 40,
	GPIOC_7 = 41,
	GPIOC_8 = 42,
	GPIOC_9 = 43,
	GPIOC_10 = 44,
	GPIOC_11 = 45,
	GPIOC_12 = 46,
	GPIOC_13 = 47,
	GPIOC_14 = 48,
	GPIOC_15 = 49,

	GPIOD_0 = 50,
	GPIOD_1 = 51,
	GPIOD_2 = 52,
	GPIOD_3 = 53,
	GPIOD_4 = 54,
	GPIOD_5 = 55,
	GPIOD_6 = 56,
	GPIOD_7 = 57,
	GPIOD_8 = 58,
	GPIOD_9 = 59,
	GPIOD_10 = 60,
	GPIOD_11 = 61,
	GPIOD_12 = 62,
	GPIOD_13 = 63,
	GPIOD_14 = 64,
	GPIOD_15 = 65,

	GPIOE_0 = 66,
	GPIOE_1 = 67,
	GPIOE_2 = 68,
	GPIOE_3 = 69,
	GPIOE_4 = 70,
	GPIOE_5 = 71,
	GPIOE_6 = 72,
	GPIOE_7 = 73,
	GPIOE_8 = 74,
	GPIOE_9 = 75,
	GPIOE_10 = 76,
	GPIOE_11 = 77,
	GPIOE_12 = 78,
	GPIOE_13 = 79,
	GPIOE_14 = 80,
	GPIOE_15 = 81,

	GPIOF_0 = 82,
	GPIOF_1 = 83,
	GPIOF_2 = 84,
	GPIOF_3 = 85,
	GPIOF_4 = 86,
	GPIOF_5 = 87,
	GPIOF_6 = 88,
	GPIOF_7 = 89,
	GPIOF_8 = 90,
	GPIOF_9 = 91,
	GPIOF_10 = 92,
	GPIOF_11 = 93,
	GPIOF_12 = 94,
	GPIOF_13 = 95,
	GPIOF_14 = 96,
	GPIOF_15 = 97,

	GPIOG_0 = 98,
	GPIOG_1 = 99,
	GPIOG_2 = 100,
	GPIOG_3 = 101,
	GPIOG_4 = 102,
	GPIOG_5 = 103,
	GPIOG_6 = 104,
	GPIOG_7 = 105,
	GPIOG_8 = 106,
	GPIOG_9 = 107,
	GPIOG_10 = 108,
	GPIOG_11 = 109,
	GPIOG_12 = 110,
	GPIOG_13 = 111,
	GPIOG_14 = 112,
	GPIOG_15 = 113,

	GPIOH_0 = 114,
	GPIOH_1 = 115,
	GPIOH_2 = 116,
	GPIOH_3 = 117,
	GPIOH_4 = 118,
	GPIOH_5 = 119,
	GPIOH_6 = 120,
	GPIOH_7 = 121,
	GPIOH_8 = 122,
	GPIOH_9 = 123,
	GPIOH_10 = 124,
	GPIOH_11 = 125,
	GPIOH_12 = 126,
	GPIOH_13 = 127,
	GPIOH_14 = 128,
	GPIOH_15 = 129,

	GPIOI_0 = 130,
	GPIOI_1 = 131,
	GPIOI_2 = 132,
	GPIOI_3 = 133,
	GPIOI_4 = 134,
	GPIOI_5 = 135,
	GPIOI_6 = 136,
	GPIOI_7 = 137,
	GPIOI_8 = 138,
	GPIOI_9 = 139,
	GPIOI_10 = 140,
	GPIOI_11 = 141,
	GPIOI_12 = 142,
	GPIOI_13 = 143,
	GPIOI_14 = 144,
	GPIOI_15 = 145,

	GPIOJ_0 = 146,
	GPIOJ_1 = 147,
	GPIOJ_2 = 148,
	GPIOJ_3 = 149,
	GPIOJ_4 = 150,
	GPIOJ_5 = 151,
	GPIOJ_6 = 152,
	GPIOJ_7 = 153,
	GPIOJ_8 = 154,
	GPIOJ_9 = 155,
	GPIOJ_10 = 156,
	GPIOJ_11 = 157,
	GPIOJ_12 = 158,
	GPIOJ_13 = 159,
	GPIOJ_14 = 160,
	GPIOJ_15 = 161,

	GPIOK_0 = 162,
	GPIOK_1 = 163,
	GPIOK_2 = 164,
	GPIOK_3 = 165,
	GPIOK_4 = 166,
	GPIOK_5 = 167,
	GPIOK_6 = 168,
	GPIOK_7 = 169,
	GPIOK_8 = 170,
	GPIOK_9 = 171,
	GPIOK_10 = 172,
	GPIOK_11 = 173,
	GPIOK_12 = 174,
	GPIOK_13 = 175,
	GPIOK_14 = 176,
	GPIOK_15 = 177,

	// DRV8860 pins go right after on chips
	//#define DRV8860_PIN(n)		((brain_pin_e)((int)BRAIN_PIN_LAST_ONCHIP + 1 + (n)))
	DRV8860_PIN_1 = 178,
	DRV8860_PIN_2 = 179,
	DRV8860_PIN_3 = 180,
	DRV8860_PIN_4 = 181,
	DRV8860_PIN_5 = 182,
	DRV8860_PIN_6 = 183,
	DRV8860_PIN_7 = 184,
	DRV8860_PIN_8 = 185,
	DRV8860_PIN_9 = 186,
	DRV8860_PIN_10 = 187,
	DRV8860_PIN_11 = 188,
	DRV8860_PIN_12 = 189,
	DRV8860_PIN_13 = 190,
	DRV8860_PIN_14 = 191,
	DRV8860_PIN_15 = 192,
	DRV8860_PIN_16 = 193,
	
} brain_pin_e;

/* Plase keep updating this define */
#define BRAIN_PIN_LAST_ONCHIP	GPIOK_15

/* diagnostic for brain pins
 * can be combination of few bits
 * defined as bit mask */
typedef enum __attribute__ ((__packed__))
{
	PIN_OK = 0,
	PIN_OPEN = 0x01,
	PIN_SHORT_TO_GND = 0x02,
	PIN_SHORT_TO_BAT = 0x04,
	PIN_OVERLOAD =	0x08,
	PIN_DRIVER_OVERTEMP = 0x10,
	PIN_INVALID = 0x80
} brain_pin_diag_e;

typedef enum __attribute__ ((__packed__)) {
	EFI_ADC_0 = 0,
	EFI_ADC_1 = 1,
	EFI_ADC_2 = 2,
	EFI_ADC_3 = 3,
	EFI_ADC_4 = 4,
	EFI_ADC_5 = 5,
	EFI_ADC_6 = 6,
	EFI_ADC_7 = 7,
	EFI_ADC_8 = 8,
	EFI_ADC_9 = 9,
	EFI_ADC_10 = 10,
	EFI_ADC_11 = 11,
	EFI_ADC_12 = 12,
	EFI_ADC_13 = 13,
	EFI_ADC_14 = 14,
	EFI_ADC_15 = 15,
	EFI_ADC_16 = 16,
	EFI_ADC_17 = 17,
	EFI_ADC_18 = 18,
	EFI_ADC_19 = 19,
	EFI_ADC_20 = 20,
	EFI_ADC_21 = 21,
	EFI_ADC_22 = 22,
	EFI_ADC_23 = 23,
	EFI_ADC_24 = 24,
	EFI_ADC_25 = 25,
	EFI_ADC_26 = 26,
	EFI_ADC_27 = 27,
	EFI_ADC_28 = 28,
	EFI_ADC_29 = 29,
	EFI_ADC_30 = 30,
	EFI_ADC_31 = 31,

	// todo: bad choice of value since now we have ADC_CHANNEL_SENSOR and could end up with 17 and 18 also
	EFI_ADC_NONE = 32,
	EFI_ADC_ERROR = 33,
#if EFI_UNIT_TEST
	/**
	 * these values are unfortunately visible to BoardReader
	 * and TunerStudio would need these ordinals to fit into field size
	 */
    TEST_MAF_CHANNEL = 34,
    TEST_CLT_CHANNEL = 35,
    TEST_IAT_CHANNEL = 36,
#endif /* EFI_UNIT_TEST */
} adc_channel_e;

#define INCOMPATIBLE_CONFIG_CHANGE EFI_ADC_0

#endif /* RUSEFI_HW_ENUMS_H_ */
