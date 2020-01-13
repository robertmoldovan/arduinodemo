/*
 Name:		arduinodemo.ino
 Created:	1/12/2020 12:47:34 PM
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
    static int delayPeriod = 100; // 100 milisecconds
    static int countDir = 1;

    digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);

    countDir = checkDirChange(delayPeriod, countDir);

    delayPeriod += 100 * countDir;
    Serial.print("New Wait Time: ");
    Serial.println(delayPeriod);
}

int checkDirChange(int delayPeriod, int countDir)
{
    if ((delayPeriod == 1000) || (delayPeriod == 0))
    {
        countDir *= -1;

        if (countDir < 0) {
            Serial.println("Going Down");
        }
        else
        {
            Serial.println("Going Up");
        }
    }

    return countDir;
}