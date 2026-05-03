// --- Função principal ----//
void setup() {
  // Configura a GPI026 como sáida
  pinMode(26, OUTPUT);
}

// --- loop infinito ----//
void loop() {
  // Liga a GPI026
  digitalWrite(26, HIGH);

  // delay 
  delay(400);

  // Desliga 
  digitalWrite(26, LOW);
  
  delay(400);
}