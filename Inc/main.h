/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
#define R_ECN_INY_Pin GPIO_PIN_2
#define R_ECN_INY_GPIO_Port GPIOE
#define R_GNC_GLP_Pin GPIO_PIN_3
#define R_GNC_GLP_GPIO_Port GPIOE
#define R_AAC_Pin GPIO_PIN_4
#define R_AAC_GPIO_Port GPIOE
#define LED0_Pin GPIO_PIN_13
#define LED0_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_14
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_15
#define LED2_GPIO_Port GPIOC
#define ADC_B5_Pin GPIO_PIN_0
#define ADC_B5_GPIO_Port GPIOC
#define ENABLE_5V_Pin GPIO_PIN_1
#define ENABLE_5V_GPIO_Port GPIOC
#define ADC_B7_Pin GPIO_PIN_2
#define ADC_B7_GPIO_Port GPIOC
#define ADC_B8_Pin GPIO_PIN_3
#define ADC_B8_GPIO_Port GPIOC
#define ADC_A1_Pin GPIO_PIN_0
#define ADC_A1_GPIO_Port GPIOA
#define ADC_A2_Pin GPIO_PIN_1
#define ADC_A2_GPIO_Port GPIOA
#define ADC_A3_Pin GPIO_PIN_2
#define ADC_A3_GPIO_Port GPIOA
#define ADC_A4_Pin GPIO_PIN_3
#define ADC_A4_GPIO_Port GPIOA
#define ADC_A5_Pin GPIO_PIN_4
#define ADC_A5_GPIO_Port GPIOA
#define ADC_A6_Pin GPIO_PIN_5
#define ADC_A6_GPIO_Port GPIOA
#define ADC_B1_Pin GPIO_PIN_6
#define ADC_B1_GPIO_Port GPIOA
#define ADC_B2_Pin GPIO_PIN_7
#define ADC_B2_GPIO_Port GPIOA
#define ADC_B9_Pin GPIO_PIN_4
#define ADC_B9_GPIO_Port GPIOC
#define ADC_B10_Pin GPIO_PIN_5
#define ADC_B10_GPIO_Port GPIOC
#define ADC_B3_Pin GPIO_PIN_0
#define ADC_B3_GPIO_Port GPIOB
#define ADC_B4_Pin GPIO_PIN_1
#define ADC_B4_GPIO_Port GPIOB
#define TP2_Pin GPIO_PIN_2
#define TP2_GPIO_Port GPIOB
#define MTR_STEP_Pin GPIO_PIN_7
#define MTR_STEP_GPIO_Port GPIOE
#define MTR_DIR_Pin GPIO_PIN_8
#define MTR_DIR_GPIO_Port GPIOE
#define MTR_FAULT_Pin GPIO_PIN_9
#define MTR_FAULT_GPIO_Port GPIOE
#define MTR_ENABLE_Pin GPIO_PIN_10
#define MTR_ENABLE_GPIO_Port GPIOE
#define RPM_OUT_Pin GPIO_PIN_11
#define RPM_OUT_GPIO_Port GPIOE
#define PMIC_CS_Pin GPIO_PIN_12
#define PMIC_CS_GPIO_Port GPIOE
#define MEMORY_CS_Pin GPIO_PIN_13
#define MEMORY_CS_GPIO_Port GPIOE
#define AUX_CS_1_Pin GPIO_PIN_14
#define AUX_CS_1_GPIO_Port GPIOE
#define AUX_CS_2_Pin GPIO_PIN_15
#define AUX_CS_2_GPIO_Port GPIOE
#define GNC_GLP_IN_Pin GPIO_PIN_11
#define GNC_GLP_IN_GPIO_Port GPIOB
#define PMIC_ENABLE_Pin GPIO_PIN_12
#define PMIC_ENABLE_GPIO_Port GPIOB
#define PMIC_SPARK_Pin GPIO_PIN_13
#define PMIC_SPARK_GPIO_Port GPIOB
#define INY1_Pin GPIO_PIN_8
#define INY1_GPIO_Port GPIOD
#define INY2_Pin GPIO_PIN_9
#define INY2_GPIO_Port GPIOD
#define INY3_Pin GPIO_PIN_10
#define INY3_GPIO_Port GPIOD
#define INY4_Pin GPIO_PIN_11
#define INY4_GPIO_Port GPIOD
#define ECN1_Pin GPIO_PIN_12
#define ECN1_GPIO_Port GPIOD
#define ECN1_EXTI_IRQn EXTI15_10_IRQn
#define ECN2_Pin GPIO_PIN_13
#define ECN2_GPIO_Port GPIOD
#define ECN3_Pin GPIO_PIN_14
#define ECN3_GPIO_Port GPIOD
#define ECN4_Pin GPIO_PIN_15
#define ECN4_GPIO_Port GPIOD
#define CKP_Pin GPIO_PIN_6
#define CKP_GPIO_Port GPIOC
#define CKP_EXTI_IRQn EXTI9_5_IRQn
#define CMP_Pin GPIO_PIN_7
#define CMP_GPIO_Port GPIOC
#define CMP_EXTI_IRQn EXTI9_5_IRQn
#define MIL_OUT_Pin GPIO_PIN_8
#define MIL_OUT_GPIO_Port GPIOC
#define CHK_OUT_Pin GPIO_PIN_9
#define CHK_OUT_GPIO_Port GPIOC
#define GNC_GLP_OUT_Pin GPIO_PIN_8
#define GNC_GLP_OUT_GPIO_Port GPIOA
#define AUX_OUT_4_Pin GPIO_PIN_10
#define AUX_OUT_4_GPIO_Port GPIOA
#define PMIC_NOMI_Pin GPIO_PIN_10
#define PMIC_NOMI_GPIO_Port GPIOC
#define PMIC_MAXI_Pin GPIO_PIN_11
#define PMIC_MAXI_GPIO_Port GPIOC
#define AUX_IN1_Pin GPIO_PIN_2
#define AUX_IN1_GPIO_Port GPIOD
#define AUX_IN2_Pin GPIO_PIN_3
#define AUX_IN2_GPIO_Port GPIOD
#define AUX_IN3_Pin GPIO_PIN_4
#define AUX_IN3_GPIO_Port GPIOD
#define AUX_IN4_Pin GPIO_PIN_5
#define AUX_IN4_GPIO_Port GPIOD
#define LED_CAN_RX_Pin GPIO_PIN_6
#define LED_CAN_RX_GPIO_Port GPIOD
#define LED_CAN_TX_Pin GPIO_PIN_7
#define LED_CAN_TX_GPIO_Port GPIOD
#define R_LMB_Pin GPIO_PIN_0
#define R_LMB_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
