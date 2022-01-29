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

  bSer.write(pos); 
  delay(5);
  sSer.write(pos); 
  delay(5);
  eSer.write(0); 
  delay(5);
  cSer.write(0);
  
}

void loop() {

  int btemp = analogRead(bPot);
  int stemp = analogRead(sPot);
  int etemp = analogRead(ePot);
  int ctemp = analogRead(cPot);

  bVal = val(btemp);
  bSer.write(bVal);
  delay(1);

  sVal = val(stemp);
  sSer.write(sVal);
  delay(1);

  eVal = val(etemp);
  eSer.write(eVal);
  delay(1);

  cVal = val(ctemp);
  cSer.write(eVal);
  delay(3);

}

int val(int temp){
  int avgVal = avgVal * 0.95 + temp * 0.5;
  int mVal = map(avgVal, 0, 1023, 0, 180);
  return mVal;
}
