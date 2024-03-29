// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/C
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code under the GNU Lesser General Public License v3.0
// and any docs and lesson examples is licensed under the CC BY-NC-SA 3.0.
// https://creativecommons.org/licenses/by-nc-sa/3.0/
// Create Date:			09/14/2017 
// Design Name:			Arduino-Button-LED-02-STEAMClown
// Description:     adaptation of blink on http://arduino.cc/
// Dependencies: 
// Revision: 
// Revision 0.05 - Updated for SVCTE Mechatronics Class 2019 - 09/16/2019
// Revision 0.04 - Updated for SVCTE Mechatronics Class 2018 - 09/06/2018
// Revision 0.03 - Updated for RubeGoldberg Workshop - 06/18/2018
// Revision 0.02 - Updated for SVCTE Mechatronics Class
// Revision 0.01 - Created 09/14/2017
// Additional Comments: 
//
// ============================================================================

int led = 10;
int pushButton = 3;
int pushButtonState;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  pushButtonState = digitalRead(pushButton);
  if(pushButtonState)
  {
    for (int i=0; i <= 5; i++)
    {
        digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(200);               // wait for a defined delay
        digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
        delay(200);               // wait for a defined delay
    } 
  }           
}
