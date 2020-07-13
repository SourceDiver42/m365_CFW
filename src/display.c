#include <include/defines.h>
#include <nrf_gpio.h>

void TM1637_Init() {
    nrf_gpio_cfg_pin_input(TM1637_DIO, NRF_GPIO_PIN_PULLDOWN);
    nrf_gpio_cfg_pin_input(TM1637_CLK, NRF_GPIO_PIN_PULLDOWN);
}

void TM1637_clearScreen(){

}

void TM1637_setBrightness(int brightness){

}

void TM1637_setSegments(const int segments[]){
    
}

void TM1637_showNumber(int number){

}

void TM1637_LEDon(){

}

void TM1637_LEDoff() {

}

void TM1637_clearScreen() {
    int data[] = {0, 0, 0, 0};
    TM1637_setSegments(data);
}
