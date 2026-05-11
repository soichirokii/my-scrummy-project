#include <SchooMyUtilities.h>

SchooMyUtilities scmUtils = SchooMyUtilities();

// ピン定義
const int SWITCH_PIN = 15; // 右上 second
const int SOIL_PIN   = A5; // 左上 アナログ

void setup() {
  Serial.begin(9600);
  pinMode(SWITCH_PIN, INPUT);
}

void loop() {
  if (!digitalRead(SWITCH_PIN)) {
    // 土壌水分を計測
    int soilRaw = analogRead(SOIL_PIN);
    float soilPercent = (float)soilRaw / 1023.0 * 100.0;

    // コンソールに表示
    Serial.println("=== 計測結果 ===");
    Serial.print("土壌水分: ");
    Serial.print(soilPercent);
    Serial.println("%");
    Serial.println("===============");

    delay(1000);
  }
}
