/*
 * stm32f302xx.h
 *
 *  Created on: Sep 1, 2025
 *      Author: Ingenieria
 */

#ifndef INC_STM32F302XX_H_
#define INC_STM32F302XX_H_


#include <stdint.h>
#define __VO volatile

#define FLASH_BASEADDR          0x08000000U /*Direccion de memoria de la Flash memory*/
#define SRAM_BASEADDR		0x20000000U /*Direccion de memoria de la SRAM*/
#define SRAM	                SRAM1_BASEADDR /*Variable SRAM*/
#define RCC                     ((RRC_RegDef_t*)RCC_BASEADDR)
#define RCC_BASEADDR            (AHB1PERIPH_BASE + 0x1000)


/* AHBx y APBx dierecciones de memria*/
#define PHERIPH_BASE	        0x40000000U
#define AHB1PERIPH_BASE     0x40020000U
#define AHB2PERIPH_BASE     0x48000000U
#define APB1PERIPH_BASE     0x40010000U
#define APB2PERIPH_BASE     ERIPH_BASEADDR
#define AHB3PERIPH_BASE	    0x50000000U
#define AHB4PERIPH_BASE	    0x60000000U

/*Direccion de memoria de los perifericos conectados al AHB2 (GPIO)*/
#define GPIOA_BASEADDR			(AHB2PERIPH_BASE + 0x0000)
#define GPIOB_BASEADDR			(AHB2PERIPH_BASE + 0x4000)
#define GPIOC_BASEADDR			(AHB2PERIPH_BASE + 0x8000)
#define GPIOD_BASEADDR			(AHB2PERIPH_BASE + 0x0C00)
#define GPIOE_BASEADDR			(AHB2PERIPH_BASE + 0x1000)
#define GPIOF_BASEADDR			(AHB2PERIPH_BASE + 0x1400)
#define GPIOG_BASEADDR			(AHB2PERIPH_BASE + 0x1800)
#define GPIOH_BASEADDR			(AHB2PERIPH_BASE + 0x1C00)

/*Direccion de memoria de los perifericos conectados al APB1(GPIO)*/

#define I2C1_BASEADDR		(APB1PERIPH_BASE +  0x5400)/*I2C direccion de memoria*/
#define I2C2_BASEADDR		(APB1PERIPH_BASE +  0x5800)/*I2C2 direccion de memoria*/
#define I2C3_BASEADDR		(APB1PERIPH_BASE +  0x7800)/*I2C3 direccion de memoria*/

#define TIM2_BASEADDR		(APB1PERIPH_BASE +  0x0000)/*TIM2 direccion de memoria*/
#define TIM3_BASEADDR		(APB1PERIPH_BASE +  0x0400)/*TIM3 direccion de memoria*/
#define TIM4_BASEADDR		(APB1PERIPH_BASE +  0x0800)/*TIM4 direccion de memoria*/
#define TIM6_BASEADDR		(APB1PERIPH_BASE +  0x1000)/*TIM6 direccion de memoria*/

#define SPI2_BASEADDR		(APB1PERIPH_BASE +  0x3800)/*SPI2 direccion de memoria*/
#define SPI3_BASEADDR		(APB1PERIPH_BASE +  0x3C00)/*SPI3 direccion de memoria*/

#define USART2_BASEADDR		(APB1PERIPH_BASE +  0x4400)/*USART2 direccion de memoria*/
#define USART3_BASEADDR		(APB1PERIPH_BASE +  0x0400)/*USART3 direccion de memoria*/
#define UART4_BASEADDR		(APB1PERIPH_BASE +  0x4C00)/*UART4 direccion de memoria*/
#define UART5_BASEADDR		(APB1PERIPH_BASE +  0x5000)/*UART direccion de memoria*/


/*Direccion de memoria de los perifericos conectados al APB2(GPIO)*/

#define EXTI_BASEADDR		(APB2PERIPH_BASE +  0x0400)/*EXTI direccion de memoria*/

#define SYSCFG_BASEADDR		(APB2PERIPH_BASE +  0x0000)/*SYSCFG direccion de memoria*/

#define TIM1_BASEADDR		(APB2PERIPH_BASE +  0x2C00 )/*EXTI direccion de memoria*/
#define TIM15_BASEADDR		(APB2PERIPH_BASE +  0x4000)/*TIM15 direccion de memoria*/
#define TIM16_BASEADDR		(APB2PERIPH_BASE +  0x4400)/*TIM16 direccion de memoria*/
#define TIM17_BASEADDR		(APB2PERIPH_BASE +  0x4800)/*TIM17 direccion de memoria*/

#define USART1_BASEADDR		(APB2PERIPH_BASE +  0x3800)/*USART1 direccion de memoria*/


/* REGISTRO DE DEFINICION DE ESTRUCTURA DE LOS PERIFERICOS*/

typedef struct
{
	__VO uint32_t MODER;			/* offset   0x00*/
	__VO uint32_t OTYPER;		        /* offset   0x04*/
	__VO uint32_t OSPEEDR;		        /* offset  0x08*/
	__VO uint32_t PUPDR;			/* offset   0x0C*/
	__VO uint32_t IDR;			/* offset   0x10*/
	__VO uint32_t ODR;			/* offset   0x14*/
	__VO uint32_t BSRR;			/* offset   0x18*/
	__VO uint32_t LCKR;			/* offset   0x1C*/
	__VO uint32_t AFR[2];			/* offset   0x20*/


}GPIO_RegDef_t;

/* Definicion de los perifericos*/
#define GPIOA  	((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB  	((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC 	((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD  	((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE  	((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF  	((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG  	((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH  	((GPIO_RegDef_t*)GPIOH_BASEADDR)

/* REGISTRO DE DEFINICION DE MACROS PARA ACTIVACION DE CLOCK  DE LOS PERIFERICOS*/
typedef struct
{
    __VO uint32_t CR;
    __VO uint32_t CFGR;
    __VO uint32_t CIR;
    __VO uint32_t APB2RSTR;
    __VO uint32_t APB1RSTR;
    __VO uint32_t AHBENR;
    __VO uint32_t APB2ENR;
    __VO uint32_t APB1ENR;
    __VO uint32_t BDCR;
    __VO uint32_t CSR;
    __VO uint32_t AHBRSTR;
    __VO uint32_t CFGR2;
    __VO uint32_t CFGR3;
}RRC_RegDef_t;
/* Macros para habilitar los clock de los GPIO*/
#define GPIOA_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 17 ) )
#define GPIOB_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 18 ) )
#define GPIOC_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 19 ) )
#define GPIOD_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 20 ) )
#define GPIOE_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 21 ) )
#define GPIOF_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 22 ) )
#define GPIOG_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 23 ) )
#define GPIOH_PCLK_EN()   ( RCC->AHBENR |= ( 1 << 16 ) )

/* Macros para habilitar los clock de los I2C*/
#define I2C1_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 21 ) )
#define I2C2_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 22 ) )
#define I2C3_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 30 ) )

/* Macros para habilitar los clock de los SPI*/
#define SPI1_PCLK_EN()  ( RCC->APB2ENR |= ( 1 << 12 ) )
#define SPI2_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 14 ) )
#define SPI3_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 15 ) )
#define SPI4_PCLK_EN()  ( RCC->APB2ENR |= ( 1 << 15 ) )


/* Macros para habilitar los clock de los USARTx*/
#define USART1_PCLK_EN()  ( RCC->APB2ENR |= ( 1 << 14 ) )
#define USART2_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 17 ) )
#define USART3_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 18 ) )
#define UART4_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 19 ) )
#define UART5_PCLK_EN()  ( RCC->APB1ENR |= ( 1 << 20 ) )

/* Macros para habilitar los clock de los SYSCFG*/
#define SYSCFG_PCLK_EN()  ( RCC->APB2ENR |= ( 1 << 0 ) )

/* Macros para deshabilitar los clock de los GPIO*/
#define GPIOA_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 17 ) )
#define GPIOB_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 18 ) )
#define GPIOC_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 19 ) )
#define GPIOD_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 20 ) )
#define GPIOE_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 21 ) )
#define GPIOF_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 22 ) )
#define GPIOG_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 23 ) )
#define GPIOH_PCLK_DI()   ( RCC->AHBENR &= ~( 1 << 16 ) )

/* Macros para deshabilitar los clock de los I2C*/

#define I2C1_PCLK_DI()  ( RCC->APB1ENR &= ~( 1 << 21 ) )
#define I2C2_PCLK_DI()  ( RCC->APB1ENR &= ~( 1 << 22 ) )
#define I2C3_PCLK_DI()  ( RCC->APB1ENR &= ~( 1 << 30 ) )

/* Macros para deshabilitar los clock de los SPI*/
#define SPI1_PCLK_DI()  ( RCC->APB2ENR &= ~( 1 << 12 ) )
#define SPI2_PCLK_DI()  ( RCC->APB1ENR &= ~( 1 << 14 ) )
#define SPI3_PCLK_DI()  ( RCC->APB1ENR &= ~( 1 << 15 ) )
#define SPI4_PCLK_DI()  ( RCC->APB2ENR &= ~( 1 << 15 ) )


/* Macros para deshabilitar los clock de los USARTx*/
#define USART1_PCLK_DE()  ( RCC->APB2ENR &= ~( 1 << 14 ) )
#define USART2_PCLK_DE()  ( RCC->APB1ENR &= ~( 1 << 17 ) )
#define USART3_PCLK_DE()  ( RCC->APB1ENR &= ~( 1 << 18 ) )
#define UART4_PCLK_DE()  ( RCC->APB1ENR &= ~( 1 << 19 ) )
#define UART5_PCLK_DE()  ( RCC->APB1ENR &= ~( 1 << 20 ) )




/* Macros para deshabilitar los clock de los SYSCFG*/
#define SYSCFG_PCLK_DI()  ( RCC->APB2ENR &= ~( 1 << 0 ) )

/* Macros para reset los perifericos GPIOx*/
#define GPIOA_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 0)); (RCC->AHB1RSTR &= ~(1 << 0)); }while(0)
#define GPIOB_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 1)); (RCC->AHB1RSTR &= ~(1 << 1)); }while(0)
#define GPIOC_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 2)); (RCC->AHB1RSTR &= ~(1 << 2)); }while(0)
#define GPIOD_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 3)); (RCC->AHB1RSTR &= ~(1 << 3)); }while(0)
#define GPIOE_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 4)); (RCC->AHB1RSTR &= ~(1 << 4)); }while(0)
#define GPIOF_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 5)); (RCC->AHB1RSTR &= ~(1 << 5)); }while(0)
#define GPIOG_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 6)); (RCC->AHB1RSTR &= ~(1 << 6)); }while(0)
#define GPIOH_REG_RESET()  do{ (RCC->AHB1RSTR |= (1 << 7)); (RCC->AHB1RSTR &= ~(1 << 7)); }while(0)



//Alguna macros genericas//
#define ENABLE 				1
#define DISABLE				0
#define SET 				ENABLE
#define RESET				DISABLE
#define GPIO_PIN_SET        SET
#define GPIO_PIN_RESET      RESET

#endif /* INC_STM32F302XX_H_ */
