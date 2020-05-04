//SEMAFOR

void setup () {
pinMode (3, OUTPUT);
pinMode (5, OUTPUT);
pinMode (7, OUTPUT);


}
void loop (){
// 3 = RED
// 5 = YELL
//7 = GREEN

// RED
digitalWrite(3, HIGH);
delay(5000);
// RED+ YELL
digitalWrite(5, HIGH);
delay(2000);
//GREEN
digitalWrite(3, LOW);
digitalWrite(5, LOW);
digitalWrite(7, HIGH);
delay(4000);
//YELL
digitalWrite(7, LOW);
digitalWrite(5, HIGH);
delay(2000);
digitalWrite(5, LOW);
//Příprava na další RED
}

