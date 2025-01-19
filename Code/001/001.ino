#include <Servo.h>
Servo myservo;
int pot;
int output;

void setup() {

  pinMode(A0,INPUT);
  Serial.begin(115200);
  myservo.attach(9);
  myservo.writeMicroseconds(1500);

}

void loop() {
  pot = analogRead(A0);
  output = map(pot, 0,1023,1500,2000);
  myservo.writeMicroseconds(output);
  Serial.println(output);
  
  

  delay(10);


}
