/*=============================================================================
 
  Motors.h

=============================================================================*/

#include "Arduino.h"

/*---------------Module Defines-----------------------------*/

// Pinout

#define PIN_MFLEFT_EN 2    	// Output pin for H Bridge
#define PIN_MFLEFT_A 47			// One side of drive
#define PIN_MFLEFT_B 49			// Other side of drive

#define PIN_MFRIGHT_EN 13
#define PIN_MFRIGHT_A 51
#define PIN_MFRIGHT_B 53

#define PIN_MBLEFT_EN 4
#define PIN_MBLEFT_A 46
#define PIN_MBLEFT_B 48

#define PIN_MBRIGHT_EN 5
#define PIN_MBRIGHT_A 50
#define PIN_MBRIGHT_B 52

// Constants
#define MOTORS 4
#define PINS_PER_MOTOR 3

#define BRAKE_TIME 200


/*---------------------------Public Functions--------------------------------*/

// Motor Reference
enum motorID {
  MFLEFT,
  MFRIGHT,
  MBLEFT,
  MBRIGHT
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
