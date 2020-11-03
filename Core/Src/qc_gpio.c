#include "qc_gpio.h"

void QC_GPIO_5V(void){

  	/* DP: 0.6V; DN: 0.6V - preset */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_Delay(1250); /* min 1.25s */

  	/* DP: 0.6V; DN: 0V */
  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_Delay(1); /* min 1ms */

  	/* DP: 0.6V; DN: 0V for 5V */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);
}


/**
  * @brief Set 9V quick charge
  * @note No need init
  * @param no
  * @retval no
  */
void QC_GPIO_9V(void){

  	/* DP: 0.6V; DN: 0.6V - preset */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_Delay(1250); /* min 1.25s */

  	/* DP: 0.6V; DN: 0V */
  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_Delay(1); /* min 1ms */

  	/* DP: 3.3V; DN: 0.6V for 9V */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_SET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);
}

/**
  * @brief Set 12V quick charge
  * @note No need init
  * @param no
  * @retval no
  */
void QC_GPIO_12V(void){

  	/* DP: 0.6V; DN: 0.6V - preset */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_Delay(1250); /* min 1.25s */

  	/* DP: 0.6V; DN: 0V */
  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_Delay(1); /* min 1ms */

  	/* DP: 0.6V; DN: 0.6V for 12V */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);
}

/**
  * @brief Set 20V quick charge
  * @note No need init
  * @param no
  * @retval no
  */
void QC_GPIO_20V(void){

  	/* DP: 0.6V; DN: 0.6V - preset */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

  	HAL_Delay(1250); /* min 1.25s */

  	/* DP: 0.6V; DN: 0V */
  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
  	HAL_Delay(1); /* min 1ms */

  	/* DP: 3.3V; DN: 3.3V for 20V */
  	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_SET);

  	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
  	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_SET);
}

/**
  * @brief Enter in continuous mode (regulation with 200mV step)
  * @note No need init
  * @param no
  * @retval no
  */
void QC_GPIO_Reg(void){

	/* DP: 0.6V; DN: 0.6V - preset */
	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

	HAL_Delay(1250); /* min 1.25s */

	/* DP: 0.6V; DN: 0V */
	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_RESET);
	HAL_Delay(1); /* min 1ms */

	/* DP: 0.6V; DN: 3.3V for continuous mode */
	HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_SET);
}

/**
  * @brief Increases voltage by 0.2V
  * @note Before use init (QC_GPIO_Reg)
  * @param no
  * @retval no
  */
void QC_GPIO_Inc(void){

	 /*     ******     */
	 /*     *	 *     */
	 /*     *	 *     */
	 /*******    *******/

	 /* DP: 0.6V */
	 HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);

	 /* DP: 3.3V */
	 HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_SET);

	 HAL_Delay(1);

	 /* DP: 0.6V */
	 HAL_GPIO_WritePin(QC_DP_UP_GPIO_Port, QC_DP_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DP_DOWN_GPIO_Port, QC_DP_DOWN_Pin, GPIO_PIN_RESET);
}

/**
  * @brief Decreases voltage by 0.2V
  * @note Before use init (QC_GPIO_Reg)
  * @param no
  * @retval no
  */
void QC_GPIO_Dec(void){

	 /*******    *******/
	 /*     *	 *     */
	 /*     *	 *     */
	 /*     ******     */

	 /* DN: 3.3V */
	 HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_SET);

	 /* DN: 0.6V */
	 HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_RESET);

	 HAL_Delay(1);

	 /* DN: 3.3V */
	 HAL_GPIO_WritePin(QC_DN_UP_GPIO_Port, QC_DN_UP_Pin, GPIO_PIN_SET);
	 HAL_GPIO_WritePin(QC_DN_DOWN_GPIO_Port, QC_DN_DOWN_Pin, GPIO_PIN_SET);
}
