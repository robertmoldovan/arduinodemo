/*
 Name:		laserdemo.ino
 Created:	1/12/2020 4:39:31 PM
 Author:	robert
*/

const int ledPin = 10;

// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
    static int delayPeriod = 1000; // 100 milisecconds

    digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);
}
