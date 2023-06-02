# How to use ESP32 Touch Sensor

### [Video Link](https://youtu.be/40tyJfvpcxw)

ESP32 Touch and Hall effect sensor are built-in inside the ESP Wroom 32 microcontroller chip. Both the sensors are easy to program and can be used in small projects. So by the end of this article, you would be able to use and  **program the ESP32 Touch and Hall effect Sensor**  with Arduino IDE.

```c
#define LED_BuiltIn 2
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BuiltIn,OUTPUT);
  Serial.begin(115200);
  delay(1000); // stop the execution for 1 sec
  Serial.println("ESP32 Touch sensor value");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(touchRead(15));
  delay(1000);
  if (touchRead(15)<40)
  {
    digitalWrite(LED_BuiltIn,HIGH);
    delay(500);
    digitalWrite(LED_BuiltIn,LOW);
  }
}
```
