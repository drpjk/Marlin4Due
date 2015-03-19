/****************************************************************************************
* Arduino Due pin assignment
*
* for RADDS
****************************************************************************************/

#define X_STEP_PIN_ORIGIN         24
#define X_DIR_PIN_ORIGIN          23
#define X_ENABLE_PIN_ORIGIN       26

#define Y_STEP_PIN_ORIGIN         17
#define Y_DIR_PIN_ORIGIN          16
#define Y_ENABLE_PIN_ORIGIN       22

#define DIR_STD_XY

#ifdef DIR_STD_XY
	#define X_STEP_PIN 				X_STEP_PIN_ORIGIN
	#define X_DIR_PIN				X_DIR_PIN_ORIGIN
	#define X_ENABLE_PIN			X_ENABLE_PIN_ORIGIN
	
	#define Y_STEP_PIN				Y_STEP_PIN_ORIGIN
	#define Y_DIR_PIN				Y_DIR_PIN_ORIGIN
	#define Y_ENABLE_PIN			Y_ENABLE_PIN_ORIGIN
#endif
#ifdef DIR_STD_YX
	#define X_STEP_PIN 				Y_STEP_PIN_ORIGIN
	#define X_DIR_PIN				Y_DIR_PIN_ORIGIN
	#define X_ENABLE_PIN			Y_ENABLE_PIN_ORIGIN
	
	#define Y_STEP_PIN				X_STEP_PIN_ORIGIN
	#define Y_DIR_PIN				X_DIR_PIN_ORIGIN
	#define Y_ENABLE_PIN			X_ENABLE_PIN_ORIGIN
#endif

#define Z_STEP_PIN         2
#define Z_DIR_PIN          3
#define Z_ENABLE_PIN       15

#define X_MIN_PIN          28
#define X_MAX_PIN          34  // 34   //Max endstops default to disabled "-1", set to commented value to enable.
#define Y_MIN_PIN          30
#define Y_MAX_PIN          36  // 36
#define Z_MIN_PIN          32
#define Z_MAX_PIN          38  // 38

#define E0_STEP_PIN        61
#define E0_DIR_PIN         60
#define E0_ENABLE_PIN      62

#define E1_STEP_PIN        64
#define E1_DIR_PIN         63
#define E1_ENABLE_PIN      65

#define E2_STEP_PIN        51
#define E2_DIR_PIN         53
#define E2_ENABLE_PIN      49

#define SDPOWER            -1
#define SDSS               4 //10 Display
#define LED_PIN            -1

#define BEEPER             41

#define FAN_PIN            -1

#define PS_ON_PIN          40

#define KILL_PIN           -1

#define HEATER_BED_PIN     7    // BED
#define HEATER_0_PIN       13
#define HEATER_1_PIN       12
#define HEATER_2_PIN       11

#define TEMP_BED_PIN       4   // ANALOG NUMBERING
#define TEMP_0_PIN         0   // ANALOG NUMBERING
#define TEMP_1_PIN         -1  // 1   // ANALOG NUMBERING
#define TEMP_2_PIN         -1  // 2   // ANALOG NUMBERING
#define TEMP_3_PIN         -1  // 3   // ANALOG NUMBERING



  #ifdef NUM_SERVOS
    #define SERVO0_PIN         5

    #if NUM_SERVOS > 1
      #define SERVO1_PIN         6
    #endif

    #if NUM_SERVOS > 2
      #define SERVO2_PIN         39
    #endif

    #if NUM_SERVOS > 3
      #define SERVO3_PIN         40
    #endif
  #endif


#ifdef ULTRA_LCD

	// RADDS LCD panel
	#ifdef NEWPANEL
	  #define LCD_PINS_RS 		42
	  #define LCD_PINS_ENABLE 	43
	  #define LCD_PINS_D4 		44
	  #define LCD_PINS_D5 		45
	  #define LCD_PINS_D6 		46
	  #define LCD_PINS_D7 		47

	  #ifdef RADDS_DISPLAY
			#define BEEPER 41

			#define BTN_EN1 50
			#define BTN_EN2 52
			#define BTN_ENC 48
			
			#define BTN_BACK 71

			#undef SDSS
			#define SDSS  10
			#define SDCARDDETECT 14
	  #endif
	#endif

#endif //ULTRA_LCD


// SPI for Max6675 Thermocouple

//works with radds??? #ifndef SDSUPPORT
//// these pins are defined in the SD library if building with SD support
//  #define MAX_SCK_PIN          52
//  #define MAX_MISO_PIN         50
//  #define MAX_MOSI_PIN         51
//  #define MAX6675_SS       53
//#else
//  #define MAX6675_SS       49
//#endif