// Detektory barvy

// nastavení propojovacích pinů modulu
#define pinS0 4
#define pinS1 5
#define pinS2 6
#define pinS3 7
#define pinOut 8

void setup() {
  // nastavení propojovacích pinů S jako výstupních
  pinMode(pinS0, OUTPUT);
  pinMode(pinS1, OUTPUT);
  pinMode(pinS2, OUTPUT);
  pinMode(pinS3, OUTPUT);
  // nastavení pinu OUT jako vstupního
  pinMode(pinOut, INPUT);
  // inicializace detektoru barev
  digitalWrite(pinS0,HIGH);
  digitalWrite(pinS1,LOW);
  // komunikace přes sériovou linku rychlostí 9600 baud
  Serial.begin(9600);
}
void loop() {
  // proměnné pro uložení frekvencí barev
  int frekvenceCervena, frekvenceZelena, frekvenceModra;
  // nastavení měření červené barvy
  digitalWrite(pinS2,LOW);
  digitalWrite(pinS3,LOW);
  // krátká pauza pro přesné měření
  delay(50);
  // načtení frekvence červené barvy
  frekvenceCervena = pulseIn(pinOut, LOW);
  // nastavení měření zelené barvy
  digitalWrite(pinS2,HIGH);
  digitalWrite(pinS3,HIGH);
  // krátká pauza pro přesné měření
  delay(50);
  // načtení frekvence zelené barvy
  frekvenceZelena = pulseIn(pinOut, LOW);
  // nastavení měření modré barvy
  digitalWrite(pinS2,LOW);
  digitalWrite(pinS3,HIGH);
  // krátká pauza pro přesné měření
  delay(50);
  // načtení frekvence modré barvy
  frekvenceModra = pulseIn(pinOut, LOW);
  // vytištění načtených frekvencí po sériové lince
  Serial.print("R: ");
  Serial.print(frekvenceCervena);
  Serial.print(" | G: ");
  Serial.print(frekvenceZelena);
  Serial.print(" | B: ");
  Serial.print(frekvenceModra);
  // pokud je detekována nějaká z barev, vytiskneme
  // informaci po sériové lince
  if (frekvenceCervena < 100 & frekvenceZelena > 100 & frekvenceModra >100) {
    Serial.print(" | Detekce cervene. ");
  }
  if (frekvenceZelena < 80) {
    Serial.print(" | Detekce zelene. ");
  }
  if (frekvenceModra < 80) {
    Serial.print(" | Detekce modre. ");
  }
  // detekce vlastní barvy složené z různých složek
  if (frekvenceCervena < 80 & frekvenceZelena < 80 ) {
    Serial.print(" | Detekce zlute. ");
  } 
  if (frekvenceCervena < 80 & frekvenceModra < 80 ) {
    Serial.print(" | Detekce fialova. ");
  }
  if (frekvenceModra < 80 & frekvenceZelena < 80 ) {
    Serial.print(" | Detekce tyrkysove. ");
  }  
  // ukončení řádku
  Serial.println();
  // volitelná pauza pro přehledné čtení výsledků
  delay(850);
}
