const int numReadings = 10;
int readings[numReadings];
int readIndex = 0;
int total = 0;
int average = 0;
int inputPin = A0;


unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }
}

void loop() {
  total = total - readings[readIndex];
  readings[readIndex] = analogRead(inputPin);
  total = total + readings[readIndex];
  readIndex = readIndex + 1;
  if (readIndex >= numReadings) {
    readIndex = 0;
  }
  average = total / numReadings;
  Serial.println(average);
  delay(1);
  // put your main code here, to run repeatedly:
    
  if (average > 1000) {
    
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }



  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  }
}
