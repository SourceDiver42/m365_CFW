typedef enum {false, true} bool;
bool isStopped;

int main() {
    
    bool isRolling = !isStopped;
    //Check if factory reset combo
    
    TM1637_Init();
    //Setup stuff

    while (1){
        //Check if stopped, then
            //Firmware update?
        //Check incoming command
        //Process command
        //Update speed counter
        //Handle button presses
        //Handle handles
        //Cruise control update
        //Check battery state
        //Handle LEDs
    }
}