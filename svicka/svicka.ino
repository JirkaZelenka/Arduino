/*
 RGB LED example - codingmama.io

9.6.2019 mi přišly další 4x Nano :) testuju na všech solově
 
http://www.heidislab.com/tutorials/how-to-build-a-candle-light-led-lamp-flame-effect
*/

int led1 = 2;
int led2 = 6;
int led3 = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  flicker();
  //breathe();
}

void breathe() {
  for (int i=50; i<=255; i++) {
    analogWrite(led1, i);
    analogWrite(led2, i);
    analogWrite(led3, i);
    delay(10);
  }

  for (int i=255; i>50; i--) {
    analogWrite(led1, i);
    analogWrite(led2, i);
    analogWrite(led3, i);
    delay(10);
  }
}

void flicker() {
    analogWrite(led1, random(10, 255));
    delay(20);
    analogWrite(led2, random(10, 255));
    delay(20);
    analogWrite(led3, random(10, 255));
    delay(20);
}
