
#include "LedControl.h"
#include "binary.h"

/*
 DIN connects to pin 12
 CLK connects to pin 11
 CS connects to pin 10 
*/
LedControl lc=LedControl(12,11,10,1);

// delay time between faces
unsigned long delaytime=1000;

// Heart
byte heart[8]={B01100110, B11111111,B11111111,B11111111,B01111110,B00111100,B00011000,B00000000};
//ZJ
byte zj[8]={B11110000, B00100110,B01000110,B11110000,B00000111,B01100001,B01101001, B00000110};


void setup() {
  lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,8);
  // Clear the display
  lc.clearDisplay(0);  
}

void drawFaces(){
  
    // Display Heart
  lc.setRow(0,0,heart[0]);
  lc.setRow(0,1,heart[1]);
  lc.setRow(0,2,heart[2]);
  lc.setRow(0,3,heart[3]);
  lc.setRow(0,4,heart[4]);
  lc.setRow(0,5,heart[5]);
  lc.setRow(0,6,heart[6]);
  lc.setRow(0,7,heart[7]);
  delay(delaytime);
  
    // Display ZJ
  lc.setRow(0,0,zj[0]);
  lc.setRow(0,1,zj[1]);
  lc.setRow(0,2,zj[2]);
  lc.setRow(0,3,zj[3]);
  lc.setRow(0,4,zj[4]);
  lc.setRow(0,5,zj[5]);
  lc.setRow(0,6,zj[6]);
  lc.setRow(0,7,zj[7]);
  delay(delaytime);

}

void loop(){
  drawFaces();
}
