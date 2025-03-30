int senzor = A0;
int releu = 7;

int prag = 35; // prag (prea uscat)

void setup() {
  pinMode(releu, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valoare = analogRead(senzor);
  //Serial.println(valoare);
  int outputValue = map(valoare, 486, 197, 0, 100);
  Serial.println("Umiditate: " +String(outputValue)+ "%");
  if (prag < outputValue) // daca umiditatea solului este peste pragul de umiditate(20%) atunci nu pornim sistemul de irigatie
  {
    digitalWrite(releu, LOW); // deschide circuit
    // = > nu este pornit sistemul de irigare
    Serial.println("Pamant destul de umed.");
  } else // daca umiditatea solului este sub pragul de umiditate (20%) pornim sistemul de irigare
  {
    digitalWrite(releu, HIGH);
    // inchide circuit
    // = > este pornit sistemul de irigare
    Serial.println("Se uda planta...");
    delay(500); // se uda planta pentr 0.5 sec
    digitalWrite(releu, LOW); // oprim sistemul de irigare
  }

  delay(2000); // pauza de 1 sec si repetam
}
