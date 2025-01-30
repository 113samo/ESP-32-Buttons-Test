#define BUTTON_1 4  // GPIO4 pre tlačidlo 1
#define BUTTON_2 5  // GPIO5 pre tlačidlo 2

void setup() {
  Serial.begin(115200);       // Spustenie sériovej komunikácie, v Serial Monitore treba nastaviť baud na 115200, Serial monitor = ctrl + shift + M
  pinMode(BUTTON_1, INPUT_PULLUP);  // Nastavenie tlačidiel ako vstup s interným pull-up rezistorom
  pinMode(BUTTON_2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_1) == LOW) { // Ak je tlačidlo 1 stlačené
    Serial.println("Tlačidlo 1 bolo stlačené!");
    delay(300); // Anti-bounce delay
  }

  if (digitalRead(BUTTON_2) == LOW) { // Ak je tlačidlo 2 stlačené
    Serial.println("Tlačidlo 2 bolo stlačené!");
    delay(300); // Anti-bounce delay
  }
}
