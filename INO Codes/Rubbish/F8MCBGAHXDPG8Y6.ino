
  int column[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4};
  int layer[4]={A3,A2,A1,A0};
  int time = 250;
 
void setup()
{
  for(int i = 0; i<16; i++)
  {
    pinMode(column[i], OUTPUT);
  }
  for(int i = 0; i<4; i++)
  {
    pinMode(layer[i], OUTPUT);
  }
  randomSeed(analogRead(10));
}

void loop()
{
	test();
}

void test()
{

//for layer 0//////////////////////
digitalWrite(layer[0], HIGH);
for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[15], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[15], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);


delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
digitalWrite(column[4], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
digitalWrite(column[4], LOW);
digitalWrite(column[0], LOW);
delay(100);
//for layer 0//////////////////////





//for layer 3//////////////////////

digitalWrite(layer[2], HIGH);
for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[15], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[15], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);

delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);


delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
digitalWrite(column[4], LOW);
delay(100);

for(int i=0; i<16; i++){
    digitalWrite(column[i], HIGH);
}
digitalWrite(column[11], LOW);
digitalWrite(column[14], LOW);
digitalWrite(column[15], LOW);
digitalWrite(column[13], LOW);
digitalWrite(column[10], LOW);
digitalWrite(column[7], LOW);
digitalWrite(column[3], LOW);
digitalWrite(column[6], LOW);
digitalWrite(column[9], LOW);
digitalWrite(column[12], LOW);
digitalWrite(column[8], LOW);
digitalWrite(column[5], LOW);
digitalWrite(column[2], LOW);
digitalWrite(column[1], LOW);
digitalWrite(column[4], LOW);
digitalWrite(column[0], LOW);
delay(100);
//for layer 3//////////////////////

}