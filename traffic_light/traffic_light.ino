
const int LEDRED = 25;
const int LEDYELLOW = 26;
const int LEDGREEN  = 27;

void setup() {
  configLeds();
}

void configLeds() {
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);
}

void red() {
  digitalWrite(LEDRED, HIGH);
  digitalWrite(LEDYELLOW, LOW);
  digitalWrite(LEDGREEN, LOW);
  delay(5000);
}

void yellow() {
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDYELLOW, HIGH);
  digitalWrite(LEDGREEN, LOW);
  delay(2000);
}

void green() {
  digitalWrite(LEDRED, LOW);
  digitalWrite(LEDYELLOW, LOW);
  digitalWrite(LEDGREEN, HIGH);
  delay(5000);
}

void loop() {
  red();
  yellow();
  green();
}