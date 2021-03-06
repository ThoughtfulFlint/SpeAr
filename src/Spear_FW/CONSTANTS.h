// FILE PER RAGGRUPPARE TUTTE LE COSTANTI 

#ifndef COSTANTS_h
#define COSTANTS_h

// velocità della comunicazione seriale
#define SERIAL_BAUDRATE						250000

// ======== PARAMETRI PER GESTIRE IL SENSORE TSL ========
// #define RTC_CONNECTION_DONE					0
// #define RTC_CONNECTION_FAILED				1

// ======== PARAMETRI PER GESTIRE IL SENSORE TSL ========
// #define TSL_CONNECTION_DONE					0
// #define TSL_CONNECTION_FAILED				1

#define TSL_GAIN_LOW						0					// Indici per gestire il Gain di lettura
#define TSL_GAIN_MED						1
#define TSL_GAIN_HIGH						2
#define TSL_GAIN_MAX						3

#define TSL_INTEGRATIONTIME_100ms			0					// Indici per gestire il tempo di integrazione della lettura
#define TSL_INTEGRATIONTIME_200ms			1
#define TSL_INTEGRATIONTIME_300ms			2
#define TSL_INTEGRATIONTIME_400ms			3
#define TSL_INTEGRATIONTIME_500ms			4
#define TSL_INTEGRATIONTIME_600ms			5

#define TSL_READTYPE_VISIBLE				0					// Indici per gestire la tipologia di lettura
#define TSL_READTYPE_FULLSPECTRUM			1
#define TSL_READTYPE_INFRARED				2

// ======== PARAMETRI PER GESTIRE LO SCHERMO LCD ========
// Dimensioni dello schermo
#define LCD_COLS							16
#define LCD_ROWS							2
// Pin per il controllo
#define LCD_PIN_RS 							8
#define LCD_PIN_ENABLE 						9
#define LCD_PIN_D4 							10
#define LCD_PIN_D5 							11
#define LCD_PIN_D6 							12
#define LCD_PIN_D7 							13

// Codice identificativo del sensore dell'adafruit
#define ADAFRUIT_SENSOR_IDENTIFIER 			2519

// ======== PARAMETRI PER GESTIRE IL MOTORE STEPPER ======== 
// Parametri inizializzazione driver adafruit
#define MOTOR_PORT 							2
#define MOTOR_STEPS_PER_REVOLUTION 			200					// [STEP]
#define MOTOR_SPEED_RPM						50					// [RPM]
#define MOTOR_STEP_TYPE						SINGLE
// #define MOTOR_STEP_TYPE						DOUBLE
// #define MOTOR_STEP_TYPE						INTERLEAVE
// #define MOTOR_STEP_TYPE						MICROSTEP
// Parametri per far combaciare gli estremi del range delle lunghezze d'onda le posizioni di riferimento
#define MOTOR_STEPS_GRATINGLIMIT_LOW		850					// [STEP] corrisponde a SPECTRALIMIT_LOW - empirical/arbitrary value for the momento
#define MOTOR_STEPS_GRATINGLIMIT_HIGH 		1250				// [STEP] corrisponde a SPECTRALIMIT_HIGH - empirical/arbitrary value for the momento
#define MOTOR_STEPS_MACHINEZERO		 		1050				// [STEP]Zero macchina. Questi sono gli step che servono per portare la normale della superficia di rifrazione normale alla direzione dei raggi della sorgente luminosa. - empirical/arbitrary value for the momento
#define MOTOR_POSITIONSENSOR_THRESHOLD		470					// [VALORE ANALOGICO 0%1024]valore sotto il quale considero il sensore ostruito e quindi non in zero 
#define MOTOR_PIN_POSITIONSENSOR 			A8

// ======== PARAMETRI PER GESTIRE IL TASTIERINO NUMERICO ========  
#define KEYPAD_ROWS 						4
#define KEYPAD_COLS 						3
#define KEYPAD_PIN_ROW_0 					38
#define KEYPAD_PIN_ROW_1 					37
#define KEYPAD_PIN_ROW_2 					36
#define KEYPAD_PIN_ROW_3 					35
#define KEYPAD_PIN_COLS_0 					34
#define KEYPAD_PIN_COLS_1 					33
#define KEYPAD_PIN_COLS_2 					32
#define KEYPAD_ANTIDEBOUNCEFILTER_TIME		150

// Pin del piezo/Buzzer
#define BUZZER_PIN 							46

// ======== PARAMETRI PER GESTIRE LA LAMPADA ========  
#define LAMP_PIN_SWITCH 					25
#define LAMP_PIN_CHECKINGSENSOR 			A9
#define LAMP_CHECKINGSENSOR_THRESHOLD 		460					// [VALORE ANALOGICO 0%1024] valore sotto il quale considero la lampada spenta - empirical/arbitrary value for the momento
#define LAMP_CHECKING_TIMEBREAK 			250					// [MILLISECONDI] tempo di attesa da un cambio di stato e l'altro per dare alla resistenza il tempo di scaricarsi - empirical/arbitrary value for the momento
#define LAMP_CHECK_PASSED					0
#define LAMP_CHECK_ERROR_PHASE_1			1
#define LAMP_CHECK_ERROR_PHASE_2			2
#define LAMP_CHECK_ERROR_PHASE_3			4

// ======== PARAMETRI PER GESTIRE I TASTI DIREZIONALI ========  
#define BUTTON_ANTIDEBOUNCEFILTER_TIME		50
#define BUTTON_PIN_BACK 					3
#define BUTTON_PIN_NEXT						4
#define BUTTON_PIN_UP 						5
#define BUTTON_PIN_DOWN 					6
#define BUTTON_PIN_OK 						7

// ======================== SD CARD	==========================
// https://www.arduino.cc/en/reference/SD
	// [...] The communication between the microcontroller and the SD card uses SPI,
	// which takes place on digital pins 11, 12, and 13 (on most Arduino boards) or 50, 51, and 52 (Arduino Mega).
	// Additionally, another pin must be used to select the SD card.
	// This can be the hardware SS pin - pin 10 (on most Arduino boards)
	// or pin 53 (on the Mega) - or another pin specified in the call to SD.begin().
	// Note that even if you don't use the hardware SS pin, it must be left as an output or the SD library won't work. [...]

#define SD_PIN_CHIPSELECT 					53
#define SD_INITIALIZING_DONE				0
#define SD_INITIALIZING_CARD_FAILED			1
#define SD_INITIALIZING_VOLUME_FAILED		2

// Numero totale delle analisi attualmente gestite
#define ANALYSISMODE_NUMBER 				3
// Codici identificativi delle singole modalità
#define ANALYSISMODE_SIMPLEREAD				0
#define ANALYSISMODE_ALLSPECTRUM			1
#define ANALYSISMODE_CONCANALYSIS			2

// limiti dello speettro di analisi per il momento sono sul visibile e sono abbastanza empirici
#define SPECTRALIMIT_LOW					380					// [NANOMETRI] corrisponde a MOTOR_STEPS_GRATINGLIMIT_LOW - empirical/arbitrary value for the momento
#define SPECTRALIMIT_HIGH					780					// [NANOMETRI] corrisponde a MOTOR_STEPS_GRATINGLIMIT_HIGH - empirical/arbitrary value for the momento
#define MIN_REPLICATES						5					// Numero minimo di letture per considerare affidabile la media.

// Semplici costanati per gestire quanti decimali mostrare a seconda dei casi 
#define DECIMAL_LCD_TRASMITTANCE			6
#define DECIMAL_SERIAL_TRASMITTANCE			8
#define DECIMAL_LCD_ABSORBANCE				6
#define DECIMAL_SERIAL_ABSORBANCE			8

#define MENU_VOICES_NUMBER					4					// numero di voci del menu proncipale (ricordarsi di inserire le stringhe aggiuntive se si aumentano)

// Indici delle voci del menu
#define MENU_LABORATORY						0
#define MENU_SETTINGS						1
#define MENU_VOICE_3						2
#define MENU_VOICE_4						3

#define REGRESSIONLINE_NUMBER_VALUES		3

#endif