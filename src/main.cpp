#include <Arduino.h>

void long_blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void short_blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);

  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  long_blink();
  long_blink();
  long_blink();
  short_blink();
  short_blink();
  short_blink();
}
