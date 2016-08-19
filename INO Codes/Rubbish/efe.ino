
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
}