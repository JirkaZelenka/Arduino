
//Trojbarevna_dioda
int RedPin = 4;
int GreenPin = 3;
int BluePin = 2;

int RedButton = 13;
int GreenButton = 12;
int BlueButton = 11;

int RedValue = 0;
int GreenValue = 0;
int BlueValue = 0;

void setup(){
pinMode(RedPin, OUTPUT);
pinMode(GreenPin, OUTPUT);
pinMode(BluePin, OUTPUT);

pinMode(RedButton, INPUT_PULLUP);
pinMode(GreenButton, INPUT_PULLUP);
pinMode(BlueButton, INPUT_PULLUP);
}

void loop(){
analogWrite(RedPin, RedValue); 
analogWrite(GreenPin, GreenValue);
analogWrite(BluePin, BlueValue);

// LOW or HIGH, obojí se mi chová divně :((

if (digitalRead(RedButton) ==LOW) {
RedValue = 0;
GreenValue = 0;
BlueValue = 0;
}
if (digitalRead(GreenButton) ==LOW) {
RedValue = 255;
GreenValue = 255;
BlueValue = 255;
}
if (digitalRead(BlueButton) ==LOW) {
RedValue = 155;
GreenValue = 255;
BlueValue = 85;
}
delay(10);
}

