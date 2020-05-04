#include <Servo.h>     //zahrnutí knihovny pro ovládání servo motoru
Servo myservo;         //každý motor má svou proměnnou typu Servo
int potpin = 0;        //pin ke kterému je připojen potenciometr
int val;               //proměnná pro načtení a nastavení úhlu

void setup()
{
  myservo.attach(9);   //tento motor je připojen na pin 9
}

void loop() 
{ 
  val = analogRead(potpin);  //napětí na potenciometru (0 až 1023)
  val = map(val, 0, 1023, 0, 180); //převod z 0 až 1023 na 0 až 180
  myservo.write(val);        //nastavení polohy podle potenciometru
  delay(15);                 //chvilka čekání než se motor natočí
}
