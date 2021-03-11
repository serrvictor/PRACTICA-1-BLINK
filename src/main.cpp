#include<Arduino.h>

#define BLUE_LED 2

void setup() {

    Serial.begin(115200);
    pinMode(BLUE_LED, OUTPUT);

}

void loop() {
    
    digitalWrite(BLUE_LED, HIGH);
    Serial.println("ON");
    delay(500);

    digitalWrite(BLUE_LED, LOW);    
    Serial.println("OFF");
    delay(500);
    
}