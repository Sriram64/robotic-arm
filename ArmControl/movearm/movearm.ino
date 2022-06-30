#include <Servo.h>

Servo s1;
int x;

void setup() {

  Serial.begin(9600);
  s1.attach(10);  
  s1.write(0);
}

void loop() {

  while(Serial.available()){

      x = Serial.readString().toInt();

      Serial.print(x);
      
      for (int i=0; i<=x; i+=2){
          s1.write(i);
          delay(5);
        }
    }
}
