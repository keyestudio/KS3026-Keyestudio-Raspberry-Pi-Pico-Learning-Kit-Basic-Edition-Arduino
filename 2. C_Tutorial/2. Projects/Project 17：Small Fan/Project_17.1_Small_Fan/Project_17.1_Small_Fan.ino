//**********************************************************************
/* 
 * Filename    : Small_Fan
 * Description : S8050 triode drives the motor working
 * Auther      : http//www.keyestudio.com
*/

void setup() {
  
  pinMode(22, OUTPUT); // Initialize pin 22 as output.
}

void loop() {
  digitalWrite(22, HIGH);   // Turn on the motor (HIGH means HIGH level)
  delay(4000);              // Delay 4 seconds
  digitalWrite(22, LOW);    // Reduce the voltage and turn off the motor
  delay(2000);              // Delay 2 seconds
}
//**********************************************************************************
