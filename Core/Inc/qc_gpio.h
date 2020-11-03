#ifndef INC_QC_GPIO_H_
#define INC_QC_GPIO_H_

#include "main.h"

/* In CUBE set labels:
 * QC_DP_UP
 * QC_DP_DOWN
 *
 * QC_DN_UP
 * QC_DN_DOWN
 * */
void QC_GPIO_5V(void);
void QC_GPIO_9V(void);
void QC_GPIO_12V(void);

void QC_GPIO_Reg(void);
void QC_GPIO_Inc(void);
void QC_GPIO_Dec(void);

#endif /* INC_QC_GPIO_H_ */
