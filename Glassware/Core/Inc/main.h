/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BT_EN_Pin GPIO_PIN_14
#define BT_EN_GPIO_Port GPIOC
#define SPI1_CAM_CS_Pin GPIO_PIN_4
#define SPI1_CAM_CS_GPIO_Port GPIOA
#define SPI2_SD_CS_Pin GPIO_PIN_0
#define SPI2_SD_CS_GPIO_Port GPIOB
#define SPI2_FLASH_CS_Pin GPIO_PIN_11
#define SPI2_FLASH_CS_GPIO_Port GPIOB
#define FLASH_HOLD_Pin GPIO_PIN_13
#define FLASH_HOLD_GPIO_Port GPIOB
#define FLASH_WP_Pin GPIO_PIN_8
#define FLASH_WP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_12
#define SWDIO_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_13
#define SWO_GPIO_Port GPIOA
#define SPI3_XBEE_ATTN_Pin GPIO_PIN_14
#define SPI3_XBEE_ATTN_GPIO_Port GPIOA
#define SPI3_XBEE_CS_Pin GPIO_PIN_15
#define SPI3_XBEE_CS_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
