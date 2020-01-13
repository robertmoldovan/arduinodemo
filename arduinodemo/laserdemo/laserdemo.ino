/*
 Name:		laserdemo.ino
 Created:	1/12/2020 4:39:31 PM
 Author:	robert
*/

const int laserPin = 6;

// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
    pinMode(laserPin, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
    digitalWrite(laserPin, HIGH);
}
