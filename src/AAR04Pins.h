/******************************************************************************
 * AREXX AAR-04 ARDUINO ROBOT
 * AARobot pin definitions.
 *
 ******************************************************************************
 * Autors
 * HeinrichAD
 *
 ******************************************************************************
 * License
 * GNU General Public License v3.0, see LICENSE file.
 *
 ******************************************************************************
 * Source code
 * https://github.com/HeinrichAD/Arduino-AAR04-Robot-PinDefinition
 *
******************************************************************************/

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif


// Serial baudrate
#define SERIAL_BAUD 9600

// New line const
#define NEWLINE  "\r\n"


// Threshold value for light sensor color black.
#define SENSOR_COLOR_BLACK 150


// **********************************************
// * Analog Pins
// **********************************************

// AARobot motor pins.
#define  PIN_MOTOR_RIGHT_FORWARD    5
#define  PIN_MOTOR_RIGHT_BACKWARD   6
#define  PIN_MOTOR_LEFT_FORWARD     9
#define  PIN_MOTOR_LEFT_BACKWARD   10

// AAR Line tracing sensor pins.
#define  PIN_LINE_TRACKING_SENSOR_LEFT   6
#define  PIN_LINE_TRACKING_SENSOR_RIGHT  7



// **********************************************
// * Digital Pins
// **********************************************

// AARobot motor wheel light sensor
#define  PIN_MOTOR_RIGHT_LIGHT_SENSOR  2
#define  PIN_MOTOR_LEFT_LIGHT_SENSOR   3

// ARR Led between the line tracing sensors.
#define  PIN_LINE_TRACKING_LED  7


