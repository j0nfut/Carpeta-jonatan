/*
 * stm32f302xx_gpio_driver.c
 *
 *  Created on: Sep 1, 2025
 *      Author: Ingenieria
 */


#include "stm32f302xx_gpio_driver.h"

/****************************************************
* @fn        - GPIO_PericClockControl
*
* @brief     - Esta función habilita o deshabilita el reloj
*              periférico para el puerto GPIO dado.
*
* @param[in] - dirección base del periférico GPIO
* @param[in] - macros ENABLE o DISABLE
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_Init
*
* @brief     - Esta función inicializa el pin
*
* @param[in] - Configura el pin
* @param[in] -
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_DeInit
*
* @brief     - Esta función desinicializa el pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] -
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_ReadFromInputPin
*
* @brief     - Esta función Lee los datos de entrada de un pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] - indica el numero de el puerto
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_ReadFromInputPort
*
* @brief     - Esta función Lee los datos de salida de un pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] -
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_WriteToOutputPin
*
* @brief     - Esta función Escribe  datos de salida de un pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] - Indica el valor (1-0) del pin
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_WriteToInputPin
*
* @brief     - Esta función Escribe  datos de entrada de un pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] - Inica el numero del pin
* @param[in] -Indica el valor (1-0) del pin
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_ToggleOutputPin
*
* @brief     - Esta función Genera una intermitencia (1-0), en los valores del pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] - Inica el numero del pin
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/****************************************************
* @fn        - GPIO_IRQConfig
*
* @brief     - Esta función habilita la interupcion en un pin
*
* @param[in] - Indica el puerto GPIO
* @param[in] - Inica el numero del pin
* @param[in] -
*
* @return    - ninguno
*
* @Note      - ninguno
****************************************************/

/*setup Clock del periferico*/
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
		{
		if (EnorDi == ENABLE)
		{
			if(pGPIOx == GPIOA)
			{
				GPIOA_PCLK_EN();

			}else if(pGPIOx == GPIOB)
			{
				GPIOB_PCLK_EN();

			}
			else if(pGPIOx == GPIOC)
			{
				GPIOC_PCLK_EN();

			}else if (pGPIOx == GPIOD)
			{
				GPIOD_PCLK_EN();

			}else if (pGPIOx == GPIOE)
			{
				GPIOE_PCLK_EN();

			}else if (pGPIOx == GPIOF)
			{
				GPIOF_PCLK_EN();

			}else if (pGPIOx == GPIOH)
			{
				GPIOH_PCLK_EN();

			}
		}
		else
		{
					if(pGPIOx == GPIOA)
					{
						GPIOA_PCLK_DI();

					}else if(pGPIOx == GPIOB)
					{
						GPIOB_PCLK_DI();

					}
					else if(pGPIOx == GPIOC)
					{
						GPIOC_PCLK_DI();

					}else if (pGPIOx == GPIOD)
					{
						GPIOD_PCLK_DI();

					}else if (pGPIOx == GPIOE)
					{
						GPIOE_PCLK_DI();

					}else if (pGPIOx == GPIOF)
					{
						GPIOF_PCLK_DI();

					}else if (pGPIOx == GPIOH)
					{
						GPIOH_PCLK_DI();

					}
				}
		}



/*Init and De-init*/
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
	uint32_t temp = 0; // temp. register

	// 1. configure the mode of gpio pin
	if(pGPIOHandle->GPIO_PinConfig.GPIO_PinMode <= GPIO_MODE_ANALOG)
	{
	    // the non interrupt mode
		pGPIOHandle ->pGPIOx->MODER &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber); //liberando espacio
		pGPIOHandle ->pGPIOx->MODER |= temp; //rellenando espacio
	    pGPIOHandle-> pGPIOx->MODER = temp;

	}
	else
	{
	    // this part will code later. (interrupt mode)
	}
	temp = 0;
	//2. Configuracion de Velocidad
	temp = (pGPIOHandle ->GPIO_PinConfig.GPIO_PinSpeed<< (2 * pGPIOHandle ->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle ->pGPIOx->OSPEEDR &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber); //liberando espacio
	pGPIOHandle ->pGPIOx->OSPEEDR |= temp; //rellenando espacio
	temp = 0;

	//3. Configuracion de Pull up pull down
	temp = (pGPIOHandle ->GPIO_PinConfig.GPIO_PinPuPdControl<< (2 * pGPIOHandle ->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle ->pGPIOx->PUPDR &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber); //liberando espacio
	pGPIOHandle ->pGPIOx->PUPDR |= temp; //rellenando espacio;
	temp = 0;

	//4. Configuracion de tipo de Salida
	temp = (pGPIOHandle ->GPIO_PinConfig.GPIO_PinOPType<< pGPIOHandle ->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle ->pGPIOx->OTYPER &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber); //liberando espacio
	pGPIOHandle ->pGPIOx->OTYPER |= temp; //rellenando espacio
	temp = 0;

	//5. Configuracion del funcionabilidad ALT
	if(pGPIOHandle ->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_ALTFN )
	{
		 // configure the alt function registers.
		    uint8_t temp1, temp2;

		    temp1 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber / 8;
		    temp2 = pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber % 8;

		    pGPIOHandle->pGPIOx->AFR[temp1] &= ~(0xF << (4 * temp2));
		    pGPIOHandle->pGPIOx->AFR[temp1] |= (pGPIOHandle->GPIO_PinConfig.GPIO_PinAltFunMode << (4 * temp2));
	}

}
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx){



}

/*Data Read and Write*/
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber){

}
int16_t GPIO_ReadFromOutputPort(GPIO_RegDef_t *pGPIOx){

}
void GPIO_WriteToIntputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value){

}
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value){

}
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber){

}

/* IRQ Configuracion y IRS manejo*/
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi){

}
void GPIO_IRQHandling(uint8_t PinNumber){

}

