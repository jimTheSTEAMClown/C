// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/arduinoCode
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code under the GNU Lesser General Public License v3.0
// https://www.gnu.org/licenses/gpl-3.0.en.html
// and any docs and lesson examples is licensed under the CC BY-NC-SA 4.0.
// https://creativecommons.org/licenses/by-nc-sa/4.0/
// Create Date:			09/14/2017 
// Design Name:			pushButton_LED_3_STEAMClown
// Description:     adaptation of blink on http://arduino.cc/
// Dependencies: 
// Revision: 
// Revision 0.05 - Updated for SVCTE Mechatronics Class 2019 - 09/02/2019
// Revision 0.04 - Updated for SVCTE Mechatronics Class 2018 - 09/06/2018
// Revision 0.03 - Updated for RubeGoldberg Workshop - 06/18/2018
// Revision 0.02 - Updated for SVCTE Mechatronics Class
// Revision 0.01 - Created 09/14/2017
// Additional Comments: 
// The Arduino board will need an LED attached to Pin 10 and a 
// Pushbutton connected to ground (Not a pull down)  attached to Analog Pin 0

// ============================================================================
// Program Code Starts Here...
// ============================================================================
const int LED = 10;		// LED on some pin  
const int buttonPin = A0;	// Input on pin Analog Pin 0 
int buttonStatus = LOW;		// variable for reading the status buttonPin on Pin

// ============================================================================
// The setup routine runs once when you load the sketch or press reset:
// This is where you define pin directions
void setup()
{
  Serial.begin(9600);           // Use Serial Monitor to debug
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);	
  digitalWrite(buttonPin, HIGH);  // set pullup on analog pin 0
}

// ============================================================================
// the loop routine runs over and over again forever:
void loop()
{
  buttonStatus = digitalRead(buttonPin);
  if (buttonStatus == HIGH)
  {
    digitalWrite(LED, HIGH);
    Serial.println ("Detected PushButton signal");
    // This is where you would put code that you wanted to happen when 
    // buttonStatus is HIGH
    delay(100);
  }
  else // buttonStatus == LOW
  {	
    digitalWrite(LED, LOW);
    Serial.println ("Waiting to Detect pushButton signal");
    // This is where you would put code that you wanted to happen when 
    // buttonStatus is lOW
    delay(100);
  } 
}
