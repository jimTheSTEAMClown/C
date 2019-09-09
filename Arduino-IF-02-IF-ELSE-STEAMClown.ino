// Example Of “Ask A Question, Get 2 Answers/Choices” Program
// Shows and IF / ELSE IF example
int x = 7;

void setup() {
  Serial.begin(9600);           // Use Serial Monitor to debug
  // Example of a simple IF / ELSE statement. 
  // Change the value of "x" above and rerun code to see which of 
  // the IF and ELSE statement based on what value of "x" is.
  Serial.print("The value of x = "); 
  Serial.println(x);    
  if(x > 12)
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is bigger than 12");
  }
  else
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is less than or equal to 12");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
