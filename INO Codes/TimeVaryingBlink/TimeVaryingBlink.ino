void setup() {
	pinMode(13, OUTPUT);
}

void loop() {
	 for(int i=100; i>=0; i=i-5){
	    digitalWrite(13, HIGH);
		delay(i);
		digitalWrite(13, LOW);
		delay(i); 
	 }
}