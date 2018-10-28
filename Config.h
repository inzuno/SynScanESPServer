// -------------------------------------------------------------------------------
// Configuration

// at startup this firmware will attempt to switch OnStep's baud rate to a faster speed and AFTER success, configure WiFi, etc.
// if establishing a link to OnStep was ***unsuccessful*** the ESP8266 will retain prior settings including it's SSID (from factory defaults, for example)
// valid baud rates are 115200, 57600, 38400, 28800, 19200, 9600

#define SERIAL_BAUD_DEFAULT 9600  // Default=9600, OnStep must be attached and running it's Serial1 interface this baud rate

#define SERIAL_BAUD 9600         // Default=9600, SynScan use only 9600

#define SERIAL_DEBUG 9600         // Default=9600, SynScan use only 9600

#define LED_PIN_OFF               // Default=_OFF, Flashes LED when trying to connect to OnStep, use LED_PIN D4 for WeMos D1 Mini

#define SERIAL_SWAP_OFF            // Default=_OFF, _ON to swap ESP8266 Serial default location GPIO 1(TX)/3(RX) to 15(TX)/13(RX) 
                                   // useful for WeMos D1 Mini where these are labeled D8(TXD2) and D7(RXD2), for example

#define SPECIAL_CHARS_ON          // Default=_ON, _OFF for standard ASCII special symbols (compatibility)
#define ADVANCED_CHARS_ON         // Default=_ON, _OFF for standard "RA/Dec" instead of symbols

#define AMBIENT_CONDITIONS_OFF    // Default=_OFF, _ON for ambient conditions on status page


// misc. options that are usually not changed
#define DEBUG_OFF                 // Turn _ON to allow WiFi startup without OnStep attached (Serial port for debug at 115200 baud)
#define Ser Serial                // Default=Serial, This is the hardware serial port where OnStep is attached

// On first successful startup an AP will appear with an SSID of "SynScan", after connecting:
// The web-site is at "192.168.10.1" and the cmd channel is at "192.168.10.1:11880".
//
// If locked out of the ESP8266, a Sketch (like MultiSerial) uploaded to the OnStep MCU (Teensy3.2, Mega2560, etc.) can recover access.
// Simply sending an 'R' in reply to any '#' received will cause a reset to AP only enabled and the default SSID/Password.  Be sure to
// upload OnStep again if necessary and then restart both devices to resume operation.

// -------------------------------------------------------------------------------
