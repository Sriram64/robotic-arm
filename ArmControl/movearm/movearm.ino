#include <Servo.h>

// initiating servos
Servo s1; 
Servo s2;
Servo s3;
Servo s4;

// variables for holding servo values
int var1; int var2; int var3; int var4; 

void setup() {
  Serial.begin(9600); // start serial 

  // attach each servo and assign a "default" position
  s1.attach(8); s1.write(0);
  s2.attach(9); s2.write(0);
  s3.attach(10);s3.write(0);
  s4.attach(11);s4.write(0);
}

void loop() {

  getVal();
  moveServo(var1, var2,var3, var4);
}

void getVal(){ // gets the values from pySerial and parse into variables
  if (Serial.available()){
      String val = Serial.readString();
      int sVal = sscanf(val.c_str(), "%d:%d:%d:%d", &var1, &var2, &var3, &var4);      
    }
  
}

void moveServo(int val1, int val2, int val3, int val4){ // move the servos wrt to the values
  s1.write(val1);
  s2.write(val2);
  s3.write(val3);
  s4.write(val4);
}
