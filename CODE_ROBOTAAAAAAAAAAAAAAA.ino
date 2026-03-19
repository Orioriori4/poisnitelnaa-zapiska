#include <Servo.h>

Servo myservo;  
Servo myservo2;

int pos = 100;    
int pos2 = 10;

void setup() {
  myservo.attach(9);  
  myservo2.attach(6);
}

void loop() {
 right();
 left();}
void right() {
    for (pos = 100; pos >= 80; pos -= 1) { 
    myservo.write(pos);              
    delay(30);                       }
  for (pos = 80; pos <= 100; pos += 1) { 
    myservo.write(pos);              
    delay(30);}}
void left() {
      for (pos2 = 10; pos2 <= 140; pos2 += 1) { 
    myservo2.write(pos2);              
    delay(15);                       
  }
  for (pos2 = 140; pos2 >= 10; pos2 -= 1) { 
    myservo2.write(pos2);            
    delay(15);}}
