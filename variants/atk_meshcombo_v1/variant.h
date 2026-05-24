#define HAS_TOUCHSCREEN 0
#define SCREEN_TOUCH_INT -1
#define TOUCH_I2C_PORT 0
#define TOUCH_SLAVE_ADDRESS 0x38 

#define USE_POWERSAVE
#define SLEEP_TIME 120

#define BUTTON_PIN 38

#define GPS_DEFAULT_NOT_PRESENT 0
#define GPS_RX_PIN 17
#define GPS_TX_PIN 18

// LoRa
#define USE_SX1262
//#define USE_SX1268

#define LORA_SCK 5
#define LORA_MISO 7
#define LORA_MOSI 6
#define LORA_CS 8

#define LORA_DIO0 -1 // a No connect on the SX1262 module
#define LORA_RESET 9
#define LORA_DIO1 21 // SX1262 IRQ
#define LORA_DIO2 16 // SX1262 BUSY
#define LORA_DIO3    

#define SX126X_CS LORA_CS 
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET

//#define SX126X_DIO2_AS_RF_SWITCH
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8
// #define CUSTOM_TOUCH_DRIVER
//#define SX126X_MAX_POWER 22 // Max power of the RA-01SH is 22db
