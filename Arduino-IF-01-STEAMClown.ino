// Example “Ask A Question” Program
int x = 42;

void setup() {
  Serial.begin(9600);           // Use Serial Monitor to debug
  // Example of a simple IF statement. 
  // Change the value of "x" above and rerun code
  // it see the IF statement run
  Serial.print("The value of x = "); 
  Serial.println(x);    
  if(x > 12)
  {
    Serial.print("The number "); 
    Serial.print(x); 
    Serial.println(" is bigger than 12");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
