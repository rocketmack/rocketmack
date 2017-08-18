//led fun blink, written by Jacob Mack 
//this program is in the public domain.


int led= 4;
int led1= 2;

void setup() {
  // declares mode of the pins
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  
}
  

void loop() {
  // when the led is high the led turn on
  digitalWrite(led, HIGH);
  digitalWrite(led, HIGH);
  //this is a delay
  delay(1000);
  // when the led is low it turn off
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  //this is a delay
  delay(1000);
}
