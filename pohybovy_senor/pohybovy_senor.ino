// Pohybové čidlo HC-SR501

// nastavení čísla vstupního pinu
const int cidloPin = 2;

void setup() {
  // komunikace přes sériovou linku rychlostí 9600 baud
  Serial.begin(9600);  
  // inicializace digitálního vstupu
  pinMode(cidloPin, INPUT);
  // nastavení přerušení na pin 2 (int0) 
  // při rostoucí hraně (logO->log1) se vykoná program prerus 
  attachInterrupt(0, detekce, RISING);
}

void loop() {
  // pro ukázku se každou vteřinu vytiskne
  // zpráva o počtu vteřin od zapnutí Arduina
  Serial.print("Cas od zapnuti: ");
  Serial.print(millis()/1000);
  Serial.println(" vterin.");
  delay(1000);
}

void detekce() {
  // pokud je aktivován digitální vstup,
  // vypiš informaci po sériové lince
  Serial.println("Detekce pohybu pomoci HC-SR501!");
}
