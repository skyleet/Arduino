#include "math.h" //it'll allow sine func

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (double i = -3.14; i <= 3.14; i = i + 0.03) {
    Serial.println (sin(i));
  }
  for (double i = -3.14; i <= 3.14; i = i + 0.03) {
    Serial.println (sin(-i));
  }
}

