#define POWER1_PIN 8
#define POWER2_PIN 9
#define POWER3_PIN 10

#define A_PIN 36
#define B_PIN 35
#define C_PIN 33
#define D_PIN 32
#define E_PIN 31
#define F_PIN 37
#define G_PIN 34

int digits[3] = {POWER1_PIN, POWER2_PIN, POWER3_PIN};
int prevMillis = 0;

void setCurrentDigit(int digitNo)
{
	if (digitNo < 0 && digitNo > 2) 
	return;
	
	digitalWrite (POWER1_PIN, LOW);
	digitalWrite (POWER2_PIN, LOW);
	digitalWrite (POWER3_PIN, LOW);
	
	digitalWrite (digits[digitNo], HIGH); 
}

int charToPinCode(char ch)
{
	int pinCode = -1;
	switch (ch)
	{    
		case '1': pinCode = 0b00000110; break;
		case '2': pinCode = 0b01011011; break;
		case '3': pinCode = 0b01001111; break;
		case '4': pinCode = 0b01100110; break;
		case '5': pinCode = 0b01101101; break;
		case '6': pinCode = 0b01111101; break;
		case '7': pinCode = 0b00000111; break;
		case '8': pinCode = 0b01111111; break;
		case '9': pinCode = 0b01101111; break;
		case '0': pinCode = 0b00111111; break;
		
		case 'A': pinCode = 0b01110111; break;
		case 'B': pinCode = 0b01111100; break;
		case 'C': pinCode = 0b00111001; break;
		case 'D': pinCode = 0b01011110; break;
		case 'E': pinCode = 0b01111001; break;
		case 'F': pinCode = 0b01110001; break;
		case 'H': pinCode = 0b01110110; break;
		case 'O': pinCode = 0b00111111; break;
		case 'L': pinCode = 0b00111000; break;
		case 'P': pinCode = 0b01110011; break;
		case 'Y': pinCode = 0b01101110; break;
		case 'S': pinCode = 0b01111111; break;
		case 'T': pinCode = 0b01111000; break;
		case '-': pinCode = 0b01000000; break;
		case '_': pinCode = 0b00000100; break;
		case ' ': pinCode = 0b00000000; break;
		default: pinCode = -1;
	}
	return pinCode;
}  

void setCurrentChar(char ch)
{
  int pinCode = charToPinCode(ch);
  if (pinCode == -1) 
    return;
    
  digitalWrite(A_PIN, pinCode & 0b00000001);
  digitalWrite(B_PIN, pinCode & 0b00000010);
  digitalWrite(C_PIN, pinCode & 0b00000100);
  digitalWrite(D_PIN, pinCode & 0b00001000);
  digitalWrite(E_PIN, pinCode & 0b00010000);
  digitalWrite(F_PIN, pinCode & 0b00100000);
  digitalWrite(G_PIN, pinCode & 0b01000000); 
}

void setup()
{
  pinMode(POWER1_PIN, OUTPUT);
  pinMode(POWER2_PIN, OUTPUT);
  pinMode(POWER3_PIN, OUTPUT);

  pinMode(E_PIN, OUTPUT);  
  pinMode(D_PIN, OUTPUT);  
  pinMode(C_PIN, OUTPUT);  
  pinMode(G_PIN, OUTPUT);  
  pinMode(B_PIN, OUTPUT);  
  pinMode(A_PIN, OUTPUT);  
  pinMode(F_PIN, OUTPUT);  
  
  prevMillis = millis();     
}

char str[64] = "  HELLO FLOCAL    "; // length = 16
int pos = 0;

void loop()
{
	int ms = 3;
	setCurrentDigit(0);
	setCurrentChar(str[pos % 16]);
	delay(ms);
	setCurrentDigit(1);
	setCurrentChar(str[(pos + 1) % 16]);
	delay(ms);
	setCurrentDigit(2);  
	setCurrentChar(str[(pos + 2)% 16]);
	delay(ms);
	
	int m = millis();
	if (m - prevMillis > 300)
	{
		pos = (pos + 1) % 16;
		prevMillis = m;
	}   
}