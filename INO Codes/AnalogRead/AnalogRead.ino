int brightness = 0;
void setup() {
  Serial.begin(1200);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  analogWrite(9, brightness);
  if (brightness == 255) { brightness = 0 ; }
  brightness = brightness + 1;
  Serial.println(analogRead(A0));
}
