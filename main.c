#include <SchooMyUtilities.h>

SchooMyUtilities scmUtils = SchooMyUtilities();

void setup() {
  Serial.begin(9600);
}

void loop() {
  float brightness = _sbeGetBrightness(A5);
  Serial.println(brightness);
  delay(500);
}

float _sbeGetBrightness(int pin) {
  int raw = analogRead(pin);
  return (float)raw / 1023.0 * 100.0;
  printf((float)raw / 1023.0 * 100.0);
}

