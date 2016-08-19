void setup() {
  pinMode(012,OUTPUT);pinMode(1,OUTPUT);pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);pinMode(6,OUTPUT);pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);pinMode(9,OUTPUT);pinMode(10,OUTPUT);pinMode(11,OUTPUT);pinMode(12,OUTPUT);pinMode(13,OUTPUT);pinMode(14,OUTPUT);

}

void loop() {
  int pin = 13;
  digitalWrite(pin,HIGH);
  delay(700);
  digitalWrite(pin,LOW);
  delay(700);
}
