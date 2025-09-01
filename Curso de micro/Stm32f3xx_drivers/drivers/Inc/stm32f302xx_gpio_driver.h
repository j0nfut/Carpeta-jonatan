/*
 * stm32f302xx_gpio_driver.h
 *
 *  Created on: Sep 1, 2025
 *      Author: Ingenieria
 */

#ifndef INC_STM32F302XX_GPIO_DRIVER_H_
#define INC_STM32F302XX_GPIO_DRIVER_H_

#include "stm32f302xx.h"

/* Las estructuras de manejo para los GPIO pines*/
typedef struct
{
    uint8_t GPIO_PinNumber;           /*Posibles valores para GPIO_PIN_NUMBERS*/
    uint8_t GPIO_PinMode;             /*Posibles valores para @GPIO_PIN_MODES*/
    uint8_t GPIO_PinSpeed;			  /*Posibles valores para @GPIO_PIN_SPEDD*/
    uint8_t GPIO_PinPuPdControl;      /*Posibles valores para @GPIO_PIN_PuPd*/
    uint8_t GPIO_PinOPType;           /*Posibles valores para @GPIO_PIN_OPType*/
    uint8_t GPIO_PinAltFunMode;       /*Posibles valores para @GPIO_PIN_ALTFunMode*/
} GPIO_PinConfig_t;



typedef struct
{

	GPIO_RegDef_t *pGPIOx;/*crear un puntero a la direccion base del periferico (GPIO)*/
	GPIO_PinConfig_t GPIO_PinConfig;  /* Aqui va la configuracion del pin*/
}GPIO_Handle_t;

/*
 * @GPIO_PIN_NUMBERS
 * GPIO pin numbers
 */
#define GPIO_PIN_NO_0     0
#define GPIO_PIN_NO_1     1
#define GPIO_PIN_NO_2     2
#define GPIO_PIN_NO_3     3
#define GPIO_PIN_NO_4     4
#define GPIO_PIN_NO_5     5
#define GPIO_PIN_NO_6     6
#define GPIO_PIN_NO_7     7
#define GPIO_PIN_NO_8     8
#define GPIO_PIN_NO_9     9
#define GPIO_PIN_NO_10    10
#define GPIO_PIN_NO_11    11
#define GPIO_PIN_NO_12    12
#define GPIO_PIN_NO_13    13
#define GPIO_PIN_NO_14    14
#define GPIO_PIN_NO_15    15


/*@GPIO_PIN_MODES*/
/*Posibles Modos Para los pines*/
#define GPIO_MODE_IN       0
#define GPIO_MODE_OUT      1
#define GPIO_MODE_ALTFN    2
#define GPIO_MODE_ANALOG   3
#define GPIO_MODE_IT_FT    4
#define GPIO_MODE_IT_RT    5
#define GPIO_MODE_IT_RFT   6

/*@GPIO_PIN_OPType
 * las opciones de salidas posibles
 */
#define GPIO_OP_TYPE_PP    0
#define GPIO_OP_TYOE_OD    1

/*@GPIO_PIN_PuPd
 * Macros para configurar pull up - pull down
 */
#define GPIO_NO_PUPD   0
#define GPIO_PIN_PU    1
#define GPIO_PIN_PD    2

/*@GPIO_PIN_SPEDD
 * Las velocidades de salidas disponibles
 */
#define GPIO_SPEED_LOW     0
#define GPIO_SPEED_MEDIUM  1
#define GPIO_SPEED_HIGH    3


/*APIs soportadas por este driver */

/*setup Clock del periferico*/

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi);

/*Init and De-init*/
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

/*Data Read and Write*/
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
int16_t GPIO_ReadFromOutputPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteToInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

/* IRQ Configuracion y IRS manejo*/
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi);
void GPIO_IRQHandling(uint8_t PinNumber);

#endif /* INC_STM32F302XX_GPIO_DRIVER_H_ */
