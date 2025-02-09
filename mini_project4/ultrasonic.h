/*
 * ultrasonic.h
 *
 *  Created on: Oct 18, 2023
 *      Author: Tarek Emad
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"

/*******************************************************************************
                             Definitions
 *******************************************************************************/
#define Ultrasonic_Trigger_Port   PORTB_ID
#define Ultrasonic_Trigger_pin    PIN5_ID

/*******************************************************************************
 Description
	➢ Initialize the ICU driver as required.
	➢ Setup the ICU call back function.
	➢ Setup the direction for the trigger pin as output pin through the
	   GPIO driver.
 *******************************************************************************/
void Ultrasonic_init(void);


/*******************************************************************************
 Description
	➢ Send the Trigger pulse to the ultrasonic.
 *******************************************************************************/
void Ultrasonic_Trigger(void);

/*******************************************************************************
 Description
	➢ Send the trigger pulse by using Ultrasonic_Trigger function.
	➢ Start the measurements by the ICU from this moment.

 *******************************************************************************/
uint16 Ultrasonic_readDistance(void);

/******************************************************************************************************
 Description
	➢ This is the call back function called by the ICU driver.
	➢ This is used to calculate the high time (pulse time) generated by
	   the ultrasonic sensor.
 ******************************************************************************************************/
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
