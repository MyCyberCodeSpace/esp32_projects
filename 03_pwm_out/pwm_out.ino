const int ledGpioPWM = 32;
const int freq = 5000;
const int width_interval  = 8; // 8 bits, 0-255
const int channel = 0;

void setup() {
  ledcAttachChannel(ledGpioPWM, freq, width_interval, channel);
}

void loop() {
  
  for (int duty = 0; duty <= 255; duty++) {
    ledcWrite(ledGpioPWM, duty);
    delay(10);
  }
  
  for (int duty = 255; duty >= 0; duty--) {
    ledcWrite(ledGpioPWM, duty);
    delay(10);
  }

}