//Contains user-configurable settings and settings
//from the CFW generator site

#define VERSION 1.0.0

#define USE_BLUETOOTH_FUNCTIONALITY
#define USE_MI_SERVICES

//#define PASSCODE

#define WHEEL 8.5 //8.5 or 10

#define BAUDRATE 115200 // 115200 or 76800
#define RW_ALL_DRV_REGISTERS false

//KERS-related
#define KERS_MINIMUM_SPEED 10.0   // km/h
#define KERSINTENSITY 1

//Max speed
#define MAXSPEED_SPORT 28.0       // km/h
#define MAXSPEED_DRIVE 22.0       // km/h
#define MAXSPEED_ECO 22.0         // km/h

//Sport tuning
#define MAXCURRENT_BATTERY_SPORT 55000 // mA
#define MAXCURRENT_PHASE_SPORT 25000 // mA

#define CURRENT_RAISING_COEFFICIENT 500 // mA/step
#define MOTOR_START_SPEED 5.0   // km/h

//Brake parameters
#define LEVER_VIRTUAL_LIMIT 115 //1-130
#define MAXCURRENT_PHASE  8000  // mA
#define MAXCURRENT_BATTERY  30000  // mA

//Cruise Control
#define CRUISE_CONTROL_DELAY 5.0 //seconds
#define CRUISE_CONTROL_BEEP true

//Battery stuff
#define BATTERY_SAVING_VOLTAGE_THRESHOLD 34 //30 to disable
#define BATTERY_VOLTAGE_LIMIT 43.01
#define DISABLE_CHARGING_MODE false

#define MOTOR_POWER_CONSTANT 51575
