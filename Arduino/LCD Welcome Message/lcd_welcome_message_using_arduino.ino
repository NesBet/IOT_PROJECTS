#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int buzzerPin = 8;
String msg1 = "Welcome to";
String msg2 = "IoT-Spot";
int size = msg2.length();

void setup() {

  // set pin mode to output
  pinMode(buzzerPin, OUTPUT);
  lcd.begin(16, 2);

  // adding a sound before the message is display
  tone(buzzerPin, 1000);  
  delay(50);
  noTone(buzzerPin);
  delay(50);
}

void loop() {

  // setting lcd to initial position
  lcd.setCursor(0, 0);
  lcd.print(msg1);
  lcd.setCursor(16-size, 1);
  lcd.print(msg2);
}