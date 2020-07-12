char MISCOOTER[] = "MIScooter0001";
char N3M_Ninebot[] = "N3M-Ninebot-Mini0001";
char alphanumeric[] = "0123456789abcdef";
char alphanumericCAPS[] = "0123456789ABCDEF";

char psmcallback[] = "psm callback\r\n";
char psmretrievesucc[] = "psm retrive succ, \r\n";

char retrievetoken[] = "retrive token, %02x %02x\r\n";
char flashwritesucc[] = "flash write succ\r\n";
char decryptedauth[] = "decrypted auth, %x\r\n";

char cloudbindsucc[] = "cloud bind succ\r\n";
char cloudbindfail[] = "cloud bind fail\r\n";

char miservicebondsucc[] = "mi_service, bond succ\r\n";

char registersucc[] = "Register succ,new token, encrypt sn, beaconkey.\r\n";
char registersuccnewtoken[] = "Register succ,new token, encrypt sn, beaconkey. new token:%02x %02x\r\n";

char waitingSN[] = "mi_service, waiting SN\r\n";
char weakdevbindsucc[] = "WEAK dev bind succ\r\n";
char appbondfail[] = "app bond fail\r\n";
char appbondsucc[] = "app bond fail\r\n";
char logincfmhandler[] = "login cfm handler, token: %02x %02x\r\n";
char decrypted[] = "decrypted %x\r\n";

char onConnected[] = "On Connected\r\n";
char onTokenWritten[] = "On Token Written, \r\n";
char onAuthWritten[] = "On Auth Written, \r\n";

char SNarrived[] = "SN Arrived\r\n";

char logincfmsucc[] = "login cfm succ\r\n";
char logincfmfail[] = "login cfm fail\r\n";

char enterstatemachine[] = "Enter state machine\r\n";
char bootloaderStart[] = "bootloader-start...\n";

//Errors
char E_flash[] = "[E]: flash operation error, opcode:%d\r\n";
char E_flashread[] = "[E]: flash read error\r\n";
char E_flashwrite[] = "[E]: flash write fail\r\n";
char E_MI_INIT_FAIL[] = "[E]: Mi Service Init fail, error code=%d\r\n";
char E_SNtimeout[] = "[E]: SN timeout, clear token\r\n";
char E_ble_flash_register_fail[] = "[E]: miio ble flash register fail\r\n";

//Warnings
char W_flash_write_not_setting[] = "[W]: flash write func not setting\r\n";
char W_weakSNtimeout[] = "[W]: Weak SN timeout.\r\n";

//Debug strings
char D_ble_flash_register_succ[] = "[D]: miio ble flash register succ\r\n";
char D_update_success[] = "[D]: update succ. len = %d\r\n";
char D_load_succ[] = "[D]: load succ, len = %d\r\n";
char D_store_succ[] = "[D]: store succ. len = %d\r\n";
char D_clear_succ[] = "[D]: clear succ. len = %d\r\n";

