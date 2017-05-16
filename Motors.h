/*=============================================================================
 
  Motors.h

=============================================================================*/

#include "Arduino.h"

/*---------------Module Defines-----------------------------*/

// Pinout

#define PIN_MFLEFT_EN 11    	// Output pin for H Bridge
#define PIN_MFLEFT_A 13			// One side of drive
#define PIN_MFLEFT_B 12			// Other side of drive

#define PIN_MFRIGHT_EN 10
#define PIN_MFRIGHT_A 9
#define PIN_MFRIGHT_B 8

#define PIN_MBLEFT_EN 5
#define PIN_MBLEFT_A 7
#define PIN_MBLEFT_B 6

#define PIN_MBRIGHT_EN 3
#define PIN_MBRIGHT_A 2
#define PIN_MBRIGHT_B 4

// Constants
#define MOTORS 4
#define PINS_PER_MOTOR 3

#define BRAKE_TIME 200


/*---------------------------Public Functions--------------------------------*/

// Motor Reference
enum motorID {
  MLEFT,
  MRIGHT,
  MFRONT,
  MBACK
};

void applyMotorSettings(void);
bool getMotorForward(int motor);
void setMotorSpeed(int motor, char val);
char getMotorSpeed(int motor);
void moveLeft(char val);
void moveRight(char val);
void moveBack(char val);
void moveForward(char val);
void turnCW(char val); // Turn Clockwise
void turnCCW(char val); // Turn Counter-Clockwise
void stopDriveMotors(void);
void hardBrake(void);
void flipMotorDirection(int motor);
void setupMotorPins(void);
