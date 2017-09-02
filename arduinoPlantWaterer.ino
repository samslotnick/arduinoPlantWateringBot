int pumpPin = A0; 
int LEDPin = 13; 
int wateringTime = 5000; // 5 sec 
int intervalTime = 3600000; // 1 hour 

void setup() {
  pinMode(pumpPin, OUTPUT); // /w PN2222A transistor
  pinMode(LEDPin, OUTPUT); // green LED

}

void loop() {
 digitalWrite(pumpPin, HIGH); 
 digitalWrite(LEDPin, HIGH);
 delay(wateringTime);        

  digitalWrite(pumpPin, LOW);
  digitalWrite(LEDPin, LOW);
  delay(intervalTime);

}
