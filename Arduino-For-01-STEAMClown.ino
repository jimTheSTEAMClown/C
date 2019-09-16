// ============================================================================
const int arduinoBoardLED = 13;		// LED on pin 13 
int delayTime = 250;		// Set a delay time constant 

// The setup routine runs once when you load the sketch or press reset:
// This is where you define pin directions
void setup()
{
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.

}

// the loop routine runs over and over again forever:
void loop()
{
  // Blinks the LED on pin 13
  //Set the LED pin to HIGH. This turns it on
  for (int i = 0; i < 6; i ++)
  {
    digitalWrite(arduinoBoardLED, HIGH);
    delay(delayTime);
    digitalWrite(arduinoBoardLED, LOW);
    delay(delayTime);
    Serial.print("Blink i = ");
    Serial.println(i);
  }
  delay(3000);
}
