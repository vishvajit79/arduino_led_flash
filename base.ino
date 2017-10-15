int redLED = 10;
int yellowLED = 8;
int blinks;
char userInput;
int value = 0;
void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  if (value == 0) {
    Serial.println("Enter the LED you want to blink(R or Y): ");
    while (Serial.available() == value) {}
    userInput = Serial.read();
    value++;
    Serial.println("Enter the number of blinks: ");
    while (Serial.available() == value) {}
    blinks = Serial.parseInt();
    if (userInput == 'R' || userInput == 'r') {

      for (int i = 0; i <= blinks; i++) {
        digitalWrite(redLED, HIGH);
        delay(1000);
        digitalWrite(redLED, LOW);
        delay(1000);
      }
    }
    if (userInput == 'Y' || userInput == 'y') {
      for (int i = 0; i <= blinks; i++) {
        digitalWrite(yellowLED, HIGH);
        delay(1000);
        digitalWrite(yellowLED, LOW);
        delay(1000);
      }
    }
  }
}
