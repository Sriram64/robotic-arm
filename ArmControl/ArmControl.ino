#include <Servo.h>

Servo bSer; // base servo
Servo sSer; // shoulder servo
Servo eSer; // elbow servo
Servo cSer; // claw servo

int pos = 0;

int bVal; int sVal; int eVal; int cVal; 

int bPot = 0;
int sPot = 1;
int ePot = 2;
int cPot = 3;

void setup() {
  bSer.attach(8);
  sSer.attach(9);
  eSer.attach(10);
  cSer.attach(11);

  bSer.write(pos); sSer.write(pos); eSer.write(0); cSer.write(0);
  
}

void loop() {

  int temp = analogRead(bPot);

  bVal = map(temp, 0, 1023, 0, 180);
  bSer.write(bVal);
  delay(3);

  sVal = map(temp, 0, 1023, 0, 180);
  sSer.write(sVal);
  delay(3);

  eVal = map(temp, 0, 1023, 0, 180);
  eSer.write(eVal);
  delay(3);
    
  eVal = map(temp, 0, 1023, 0, 180);
  eSer.write(eVal);
  delay(3);

}
