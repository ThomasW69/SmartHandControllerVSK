// ---------------------------------------------------------------------------------------------------------------------------------
// Configuration for OnStep SmartHandServer infrequently used eXtended options

//                                 *** Most users will not change anything in this file! ***

// ---------------------------------------------------------------------------------------------------------------------------------
// ADJUST THE FOLLOWING TO CONFIGURE YOUR CONTROLLER FEATURES ----------------------------------------------------------------------
// <-Req'd = always must set, <-Often = usually must set, Option = optional, Adjust = adjust as req'd, Infreq = infrequently changed

// DEBUG ------------------------------------------------------------ see https://onstep.groups.io/g/main/wiki/6-Configuration#DEBUG
// Enable additional debugging and/or status messages on the specified SERIAL_DEBUG port
// Note that the SERIAL_DEBUG port cannot be used for normal communication with OnStep

#define DISPLAY_OLED SSD1309

//      Parameter Name              Value        Default  Notes                                                                 Hint
#define DEBUG                         OFF //         OFF, Use ON for background error messages only, use VERBOSE for all      Infreq
                                          //              error and status messages, use PROFILER for VT100 task profiler,
                                          //              use REMOTE to forward verbose debug output to OnStep
#define SERIAL_DEBUG               Serial //      Serial, Or use any h/w serial port. Serial1 or Serial2, etc. as supported.  Option
#define SERIAL_DEBUG_BAUD            57600 //        9600, n. Where n=9600,19200,57600,115200 (common baud rates.)             Option

// NON-VOLATILE STORAGE ------------------------------------------------------------------------------------------------------------
#define NV_WIPE                       OFF //         OFF, Causes the defaults to be written back into NV (FLASH,EEPROM,etc.)  Infreq
                                          //              ***     IMPORTANT: ENABLE THIS OPTION THEN UPLOAD, WAIT A MINUTE    ***
// Warning --->                           //              ***     OR TWO THEN SET THIS OPTION TO OFF AND UPLOAD AGAIN.        ***
                                          //              ***     LEAVING THIS OPTION ENABLED CAN CAUSE EXCESSIVE NV          ***
                                          //              ***     WEAR AND DAMAGE THE MICROCONTROLLER NV SUBSYSTEM !!!        ***

#define SERIAL_IP_MODE                OFF //         OFF, Use STATION to enable the interface (ESP32 only.)                   Option
// IP ADDRESS SETTINGS -------------------------------------------------------------------------------------------------------------
                                          //              then specify SERIAL_IP as the serial port in Config.h


#ifdef Kuppel
 #define ONSTEP1_HOST_NAME                          "" //          "", Wifi Host Name to connnect to, leave blank to disable.              Adjust 
 #define ONSTEP1_SSID                "Kuppelsteuerung" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP1_PASSWORD                   "password" //          "", Wifi alternate Station mode password.                               Adjust
 #define ONSTEP1_IP_ADDR                 {192,168,0,1} //  ..168,0,1}, Wifi alternate Target IP Address to connect to.                     Adjust

 #define ONSTEP2_HOST_NAME                  "FRITZBox" //          "", Wifi Host Name to connnect to, leave blank to disable.              Adjust
 #define ONSTEP2_SSID              "FRITZ!Box 7590 FN" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP2_PASSWORD       "90508353087962707609" //  "password", Wifi alternate Station mode password.                               Adjust
 #define ONSTEP2_IP_ADDR             {192,168,178,175} //  ..168,0,1}, Wifi alternate Target IP Address to connect to.                     Adjust

 #define ONSTEP3_HOST_NAME                     ""      //    "OnStep", Wifi Host Name to connnect to, leave blank to disable.              Adjust
 #define ONSTEP3_SSID                  "Steuerung30er" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP3_PASSWORD                   "password" //  "password", Wifi Station mode password.                                         Adjust
 #define ONSTEP3_IP_ADDR                 {192,168,0,1} //  ..168,0,1}, Wifi Target IP Address to connect to.                               Adjust 

#else
 #define ONSTEP1_HOST_NAME                     ""      //    "OnStep", Wifi Host Name to connnect to, leave blank to disable.              Adjust
 #define ONSTEP1_SSID                  "Steuerung30er" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP1_PASSWORD                   "password" //  "password", Wifi Station mode password.                                         Adjust
 #define ONSTEP1_IP_ADDR                 {192,168,0,1} //  ..168,0,1}, Wifi Target IP Address to connect to.                               Adjust 

 #define ONSTEP2_HOST_NAME                          "" //          "", Wifi Host Name to connnect to, leave blank to disable.              Adjust 
 #define ONSTEP2_SSID                "Kuppelsteuerung" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP2_PASSWORD                   "password" //          "", Wifi alternate Station mode password.                               Adjust
 #define ONSTEP2_IP_ADDR                 {192,168,0,1} //  ..168,0,1}, Wifi alternate Target IP Address to connect to.                     Adjust

 #define ONSTEP3_HOST_NAME                  "FRITZBox" //          "", Wifi Host Name to connnect to, leave blank to disable.              Adjust
 #define ONSTEP3_SSID              "FRITZ!Box 7590 FN" //    "ONSTEP", Wifi alternate Station SSID to connnect to.                         Adjust
 #define ONSTEP3_PASSWORD       "90508353087962707609" //  "password", Wifi alternate Station mode password.                               Adjust
 #define ONSTEP3_IP_ADDR             {192,168,178,175} //  ..168,0,1}, Wifi alternate Target IP Address to connect to.                     Adjust
#endif
