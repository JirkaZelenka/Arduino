//Změna jasu

int ledPin = 3;
int brightness = 0;
int button1 = 5;
int button2 = 6;

void setup(){
  Serial.begin(9600);
  pinMode (ledPin, OUTPUT);
  pinMode (button1, INPUT_PULLUP);
  pinMode (button2, INPUT_PULLUP);
}
void loop(){
  // rozsviť diodu podle aktuální brightness
analogWrite(ledPin, brightness);
 if(digitalRead(button1) ==LOW && brightness <255)
{brightness +=5;}

if(digitalRead(button2) ==LOW && brightness >0)
{brightness -=5;}
delay(500);
Serial.println(brightness);
}

