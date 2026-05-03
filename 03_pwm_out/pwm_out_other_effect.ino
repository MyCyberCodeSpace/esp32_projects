// sai gradualmente para o 50% fixa em 50 por algum tempo e sobre para o 100% e permanece um tempo 
// depois volta para 80% fixa por algum tempo, vai para 50% fica por um tempo e cai para 0%.

const int ledGpioPWM = 32;
const int freq = 5000;
const int width_interval  = 8;
const int channel = 0;

void setup() {
  ledcAttachChannel(ledGpioPWM, freq, width_interval, channel);
}

void pulseLED(int initial_duty, int final_duty, int arg_delay) {
  if (initial_duty < final_duty) {
    for (int duty = initial_duty; duty <= final_duty; duty++) {
      ledcWrite(ledGpioPWM, duty);
      delay(10);
    }
  } else {
    for (int duty = initial_duty; duty >= final_duty; duty--) {
      ledcWrite(ledGpioPWM, duty);
      delay(10);
    }
  }
  delay(arg_delay);
}

void loop() {
  pulseLED(0, 127, 2000);   // 50%
  pulseLED(128, 255, 3000); // 100%
  pulseLED(255, 180, 4000); // 80% 
  pulseLED(179, 127, 3000); // 50%
  pulseLED(126, 0, 5000);   // 0%
}