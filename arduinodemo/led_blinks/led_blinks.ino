/*
 Name:		led_blinks.ino
 Created:	1/14/2020 5:38:56 PM
 Author:	rober
*/

 

// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin 13 as an output.
    Serial.println("Start setup");
    pinMode(13, OUTPUT);
    Serial.println("End setup");
}

// the loop function runs over and over again forever
void loop() {
    Serial.println("Blink...");
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
}
