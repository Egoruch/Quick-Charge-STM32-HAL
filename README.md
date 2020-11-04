# Quick-Charge-STM32-HAL
Simple library for get 9V/12V/20V/configurable output with step 0.2V from chargers with Quick Charge 2.0/3.0.
* Article (rus): 
* Youtube (rus): https://youtu.be/tvPMxghyDuc
___
* STM32F103C8; STM32CubeIDE; HAL
 ## Connection diagram
  ![alt text](https://cxemka.com/upload/art/qc/g/quick_charge_connection_diagram.svg)
 ## CubeMX
  ![alt text](https://cxemka.com/upload/art/qc/g/cube_cnf_qc.png)
 ## How to use
 Execute function corresponding to voltage:
 * 5V: QC_GPIO_5V();
 * 9V: QC_GPIO_9V();
 * 12V: QC_GPIO_12V();
 * 20V: QC_GPIO_20V();
 
 For regulation (continuous) mode execute initialization and then set output voltage by using incrementation/decrementation functions (MAX 12V out):
 * QC_GPIO_Reg();
 * +0.2V: QC_GPIO_Inc();
 * -0.2V: QC_GPIO_Dec();
 ## Tested with different QC chargers (USB-A and USB-C)
 ![alt text](https://cxemka.com/upload/art/mini_usb_ttl/chargers_qc.jpg)
 ## For USB Type-C resistors 5.1k between CC1, CC2 and GND are neccessary
 ![alt text](https://cxemka.com/upload/art/qc/h/5100.svg)
 ## Output voltage
  ![alt text](https://cxemka.com/upload/art/qc/g/200mv_step_regulation_quick_charge.jpg)
