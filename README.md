# Quick-Charge-STM32-HAL
Simple library for get 9V/12V/20V/configurable output with step 0.2V from chargers with Quick Charge 2.0/3.0.
* Article (rus): https://cxemka.com/63-podklyuchenie-ntc-termistora-k-stm32-izmerenie-temperatury.html
* Youtube (sub): https://www.youtube.com/watch?v=OWJj85EfXL4
___
* STM32F103C8; STM32CubeIDE; HAL
 ## Connection diagram
  ![alt text](https://cxemka.com/upload/art/qc/g/quick_charge_connection_diagram.svg)
 ## CubeMX
  ![alt text](https://cxemka.com/upload/art/qc/g/cube_cnf_qc.png)
 ## How to use
 Execute function corresponding to voltage:
 * 9V: QC_GPIO_9V();
 * 12V: QC_GPIO_12V();
 * 20V: QC_GPIO_20V();
 
 For regulation (continuous) mode execute initialization and then control output voltage by incrementation and decrementation functions:
 * QC_GPIO_Reg();
 * QC_GPIO_Inc();
 * QC_GPIO_Dec();
 ## Tested with different QC chargers (USB-A and USB-C)
 ![alt text](https://cxemka.com/upload/art/mini_usb_ttl/chargers_qc.jpg)
 ## For USB Type-C neccessary resistors 5.1k between CC1, CC2 and GND
 ![alt text](https://cxemka.com/upload/art/qc/h/5100.svg)
 ## Tested with USB-A and USB-C with different QC chargers
  ![alt text](https://cxemka.com/upload/art/qc/g/200mv_step_regulation_quick_charge.jpg)
