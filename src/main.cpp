#include <Arduino.h>
int LDR_PIN = A0;
void setup() {
    Serial.begin(9600);
    pinMode(LDR_PIN, INPUT);

}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent=map(ldrRaw, 0,1023, 0, 100);

    Serial.print("ldrRaw:");
    Serial.println(ldrRaw);
    Serial.print("lightPercent:");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(300);


}