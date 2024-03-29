// ============================================================================
// Source: STEAM Clown - www.steamclown.org 
// GitHub: https://github.com/jimTheSTEAMClown/arduinoCode
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist 
// This example code is licensed under the CC BY-NC-SA 3.0.
// https://creativecommons.org/licenses/by-nc-sa/3.0/
// Create Date:      11/26/2017 
// Design Name:     limitSwitch-01
// Description:     
// Dependencies: 
// Revision: 
// Revision 0.02 - Updated for SVCTE Mechatronics Class
// Revision 0.01 - Created 11/26/2017
// Additional Comments: 
//
// ============================================================================

int leftLimitSwitch=3;
int rightLimitSwitch=4;
int startPulse=2;
int boardLED=13;
// Motor 1
byte motorSpeed=0;  // change this (0-255) to control the speed of the motors 
int motorDirectionPin1 = 6;
int motorDirectionPin2 = 7;
int motorDriveSpeedPin = 9;

int startPulseStatus = LOW;
int leftLimitSwitchStatus = LOW;
int rightLimitSwitchStatus = LOW;
int toggle = 0;
void setup() {
  // put your setup code here, to run once:
  // initialize serial communication @ 9600 baud:
  Serial.begin(9600);
  
  //Define L298N Dual H-Bridge Motor Controller Pins
  
  pinMode(boardLED,OUTPUT);
  pinMode(motorDirectionPin1,OUTPUT);
  pinMode(motorDirectionPin2,OUTPUT);
  pinMode(motorDriveSpeedPin,OUTPUT);
  pinMode(startPulse,INPUT);
  pinMode(leftLimitSwitch,INPUT);
  pinMode(rightLimitSwitch,INPUT);
  
  // stop motors
  digitalWrite(motorDirectionPin1, LOW);
  digitalWrite(motorDirectionPin2, LOW);
  analogWrite(motorSpeed, 0);

  delay(100); // delay for some time... maybe 10 seconds
  // run motor to the left till left limit is detected, then stop the motor
  run2LeftLimit(100);
  toggle=1;
}

void loop() {
  // put your main code here, to run repeatedly:

}

// functions
int driveMotorLeft(int localMotorSpeed)
  {
    analogWrite(motorDriveSpeedPin, localMotorSpeed);//Sets speed variable via PWM 
    digitalWrite(motorDirectionPin1, LOW);
    digitalWrite(motorDirectionPin2, HIGH);
    Serial.println("Motor 1 Left"); // Prints out “Motor 1 Forward” on the serial monitor
    //Serial.println("   "); // Creates a blank line printed on the serial monitor
  }


int driveMotorRight(int localMotorSpeed)
  {
    analogWrite(motorDriveSpeedPin, localMotorSpeed);//Sets speed variable via PWM 
    digitalWrite(motorDirectionPin1, HIGH);
    digitalWrite(motorDirectionPin2, LOW);
    Serial.println("Motor 1 Right");
    //Serial.println("   ");
  }

void driveMotorFreeSpin()
  {
    analogWrite(motorDriveSpeedPin, 0);//Sets speed variable via PWM 
    digitalWrite(motorDirectionPin1, LOW);
    digitalWrite(motorDirectionPin2, HIGH);
    Serial.println("Motor 1 freespin left");
    Serial.println("   ");
  }
void driveMotorStop()
  {
    analogWrite(motorDriveSpeedPin, 0);//Sets speed variable via PWM 
    digitalWrite(motorDirectionPin1, LOW);
    digitalWrite(motorDirectionPin2, LOW);
    Serial.println("Motor 1 STOPPED");
    Serial.println("   ");
  }

int run2LeftLimit(int localMotorSpeed)
  {
    leftLimitSwitchStatus  = digitalRead(leftLimitSwitch);
      if (leftLimitSwitchStatus == HIGH)
      {
        Serial.println ("Reached Left Limit");
        driveMotorStop();
      }
      else
      {
        leftLimitSwitchStatus  = digitalRead(leftLimitSwitch);
        while(leftLimitSwitchStatus == LOW)
        {
          driveMotorLeft(localMotorSpeed);
          leftLimitSwitchStatus  = digitalRead(leftLimitSwitch);
        }
        driveMotorStop();
      }
  }

int run2RightLimit(int localMotorSpeed)
  {
    rightLimitSwitchStatus  = digitalRead(rightLimitSwitch);
      if (rightLimitSwitchStatus == HIGH)
      {
        Serial.println ("Reached Right Limit");
        driveMotorStop();
      }
      else
      {
        rightLimitSwitchStatus  = digitalRead(rightLimitSwitch);
        while(rightLimitSwitchStatus == LOW)
        {
          driveMotorRight(localMotorSpeed);
          rightLimitSwitchStatus  = digitalRead(rightLimitSwitch);
        }
        driveMotorStop();
      }
  }
