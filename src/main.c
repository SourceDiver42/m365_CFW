#include <include/user_config.h>
#include <include/commands.h>
#include <include/defines.h>
#include <include/display.h>
#include <include/strings.h>

typedef enum {false, true} bool;
bool isStopped;

int main() {
    
    bool isRolling = !isStopped;
    //Check if factory reset combo
    
    TM1637_Init();
    //Setup stuff
    //Setup serial

    while (1){
        //Check if stopped, then
            //Firmware update?
        //Check incoming command
        //Process command
            //Serial
        //Update speedometer
        //Handle button presses
            //Timer
                //switch
                    //LED
                    //Cruise control
        //Handle handles
        //Cruise control update
        //Check battery state
        //Handle LEDs
    }
}