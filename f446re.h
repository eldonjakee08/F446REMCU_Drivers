/*
 * f446re.h
 *
 *  Created on: Mar 16, 2025
 *      Author: eldon
 */

#ifndef F446RE_H_
#define F446RE_H_

//RCC ADDRESSES
#define RCC_BASE_ADDR 		0x40023800UL
#define RCC_CFGR_ADDR 		(RCC_BASE_ADDR + 0x08)
#define RCC_AHB1ENR 		(0x40023800UL + 0x30)

//GPIO ADDRESES
#define GPIOA_BASE_ADDR 	0x40020000UL
#define GPIOA_AFRH_ADDR 	(GPIOA_BASE_ADDR + 0x24)
#define GPIOA_AFRL_ADDR 	(GPIOA_BASE_ADDR + 0x20)
#define GPIOA_MODER_ADDR 	GPIOA_BASE_ADDR

//RCC AHBENR MODES
#define ENABLE 1
#define DISABLE 0

//MCO1/MCO2 PRESCALER/DIVIDER MODES
#define MCO_PRESCALER_0 0
#define MCO_PRESCALER_2 4
#define MCO_PRESCALER_3 5
#define MCO_PRESCALER_4 6
#define MCO_PRESCALER_5 7


//GPIO MODE Register settings
#define RST_STATE 0
#define INPUT_MODE 0
#define OUTPUT_MODE 1
#define ALT_FUNC_MODE 2
#define ANALOG_MODE 3

//MCO1 output where to feed it
#define MCO1_HSI_CLK 0
#define MCO1_LSE_CLK 1
#define MCO1_HSE_CLK 2
#define MCO1_PLL_CLK 3

//Alternate function values
#define AF0	0
#define AF1 1
#define AF2 2
#define AF3 3
#define AF4 4
#define AF5 5
#define AF6 6
#define AF7 7
#define AF8 8
#define AF9 9
#define AF10 10
#define AF11 11
#define AF12 12
#define AF13 13
#define AF14 14
#define AF15 15

#include <stdint.h>

typedef struct
{
	uint32_t AFRH8		:3;
	uint32_t AFRH9		:3;
	uint32_t AFRH10		:3;
	uint32_t AFRH11		:3;
	uint32_t AFRH12		:3;
	uint32_t AFRH13		:3;
	uint32_t AFRH14		:3;
	uint32_t AFRH15		:3;

}GPIOx_AFRH_t;

typedef struct
{
	uint32_t AFRH8		:3;
	uint32_t AFRH9		:3;
	uint32_t AFRH10		:3;
	uint32_t AFRH11		:3;
	uint32_t AFRH12		:3;
	uint32_t AFRH13		:3;
	uint32_t AFRH14		:3;
	uint32_t AFRH15		:3;

}GPIOx_AFRL_t;

typedef struct
{
	uint32_t gpioa_en		:1;
	uint32_t gpiob_en		:1;
	uint32_t gpioc_en		:1;
	uint32_t gpiod_en		:1;
	uint32_t gpioe_en		:1;
	uint32_t gpiof_en		:1;
	uint32_t gpiog_en		:1;
	uint32_t gpioh_en		:1;
	uint32_t reserved1		:4;
	uint32_t crc_en			:1;
	uint32_t reserved2		:5;
	uint32_t bkpsram_en		:1;
	uint32_t reserved3		:2;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;
	uint32_t reserved4		:6;
	uint32_t otghs_en		:1;
	uint32_t otghsulpi_en	:1;
	uint32_t reserved5		:1;

}RCC_AHB1ENR_t;

typedef struct
{
	uint32_t pin_0		:2;
	uint32_t pin_1		:2;
	uint32_t pin_2		:2;
	uint32_t pin_3		:2;
	uint32_t pin_4		:2;
	uint32_t pin_5		:2;
	uint32_t pin_6		:2;
	uint32_t pin_7		:2;
	uint32_t pin_8		:2;
	uint32_t pin_9		:2;
	uint32_t pin_10		:2;
	uint32_t pin_11		:2;
	uint32_t pin_12		:2;
	uint32_t pin_13		:2;
	uint32_t pin_14		:2;
	uint32_t pin_15		:2;

}GPIOx_MODER_t;

typedef struct
{
	uint32_t pin_0		:1;
	uint32_t pin_1		:1;
	uint32_t pin_2		:1;
	uint32_t pin_3		:1;
	uint32_t pin_4		:1;
	uint32_t pin_5		:1;
	uint32_t pin_6		:1;
	uint32_t pin_7		:1;
	uint32_t pin_8		:1;
	uint32_t pin_9		:1;
	uint32_t pin_10		:1;
	uint32_t pin_11		:1;
	uint32_t pin_12		:1;
	uint32_t pin_13		:1;
	uint32_t pin_14		:1;
	uint32_t pin_15		:1;
	uint32_t reserved	:16;

}GPIOx_ODR_t;

typedef struct
{
	uint32_t pin_0		:1;
	uint32_t pin_1		:1;
	uint32_t pin_2		:1;
	uint32_t pin_3		:1;
	uint32_t pin_4		:1;
	uint32_t pin_5		:1;
	uint32_t pin_6		:1;
	uint32_t pin_7		:1;
	uint32_t pin_8		:1;
	uint32_t pin_9		:1;
	uint32_t pin_10		:1;
	uint32_t pin_11		:1;
	uint32_t pin_12		:1;
	uint32_t pin_13		:1;
	uint32_t pin_14		:1;
	uint32_t pin_15		:1;
	uint32_t reserved	:16;

}GPIOx_IDR_t;

typedef struct
{
	uint32_t pin_0		:2;
	uint32_t pin_1		:2;
	uint32_t pin_2		:2;
	uint32_t pin_3		:2;
	uint32_t pin_4		:2;
	uint32_t pin_5		:2;
	uint32_t pin_6		:2;
	uint32_t pin_7		:2;
	uint32_t pin_8		:2;
	uint32_t pin_9		:2;
	uint32_t pin_10		:2;
	uint32_t pin_11		:2;
	uint32_t pin_12		:2;
	uint32_t pin_13		:2;
	uint32_t pin_14		:2;
	uint32_t pin_15		:2;

}GPIOx_PUPDR_t;

typedef struct
{
	uint32_t SW				    :2; //System clock switch
	uint32_t SWS			    :2; //System clock switch status
	uint32_t HPRE			    :4; //AHB prescaler
	uint32_t reserved1		:1; //reserved bits
	uint32_t reserved2		:1; //reserved bits
	uint32_t PPRE1			  :3; // APB Low speed prescaler (APB1
	uint32_t PPRE2			  :3; // APB high-speed prescaler (APB2)
	uint32_t RTCPRE			  :5; //HSE division factor for RTC clock
	uint32_t MCO1			    :2; //Microcontroller clock output 1
	uint32_t reserved3		:1; //reserved bits
	uint32_t MCO1PRE		  :3; //MCO1 prescaler
	uint32_t MCO2PRE		  :3; //MCO2 prescaler
	uint32_t MCO2			    :2; //Microcontroller clock output 2

}RCC_CFGR_t;



#endif /* F446RE_H_ */
