/*
 Name:		led_blinks.ino
 Created:	1/14/2020 5:38:56 PM
 Author:	rober
*/

const int ledPinRed = 13;
const int ledPinGreen = 12;

// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin 13 as an output.
    Serial.println("Start setup");
    pinMode(ledPinRed, OUTPUT);
    pinMode(ledPinGreen, OUTPUT);
    Serial.println("End setup");
}

// the loop function runs over and over again forever
void loop() {
    Serial.println("Blink...");
    digitalWrite(ledPinRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(ledPinGreen, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(ledPinRed, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(ledPinGreen, HIGH);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
}
