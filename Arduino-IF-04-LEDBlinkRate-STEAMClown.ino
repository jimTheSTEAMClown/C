// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/C
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code under the GNU Lesser General Public License v3.0
// https://www.gnu.org/licenses/gpl-3.0.en.html
// and any docs and lesson examples is licensed under the CC BY-NC-SA 4.0.
// https://creativecommons.org/licenses/by-nc-sa/4.0/
// Create Date:			09/10/2017 
// Design Name:			if_STEAMClown
// Description:     adaptation of blink on http://arduino.cc/
// Dependencies: 
// Revision: 
// Revision 0.06 - Updated comments for SVCTE Mechatronics Class 2022 - 09/02/2022
// Revision 0.05 - Updated for SVCTE Mechatronics Class 2019 - 09/02/2019
// Revision 0.04 - Updated for SVCTE Mechatronics Class 2018 - 09/07/2018
// Revision 0.02 - Updated for SVCTE Mechatronics Class
// Revision 0.01 - Created 09/10/2017
// Additional Comments: 
//
// ============================================================================



// ============================================================================
// Program Code Starts Here...
// ============================================================================
// define variables that will be used in the sketch
const int arduinoBoardLED = 13;		// LED on pin 13 
int myDelayTime = 0;	// Use to control the delay time used when calling delay() function
	
// ============================================================================
// The setup routine runs once when you load the sketch or press reset:
// This is where you define pin directions
void setup()
{
	Serial.begin(9600);           // Use Serial Monitor to debug
	pinMode(arduinoBoardLED, OUTPUT);
}

// ============================================================================
// the "main" loop routine runs over and over again forever:
void loop()
{
	digitalWrite(arduinoBoardLED, HIGH); //Set the LED pin to HIGH. This turns it On
	delay(myDelayTime);	
	digitalWrite(arduinoBoardLED, LOW);	//Set the LED pin to LOW. This turns it Off
	delay(myDelayTime);	
	Serial.print(".");		
	myDelayTime = myDelayTime + 20;	
	if (myDelayTime > 500)	  
   	{	    
   		myDelayTime = 10;	    
   		Serial.println("R");
   	}
}
