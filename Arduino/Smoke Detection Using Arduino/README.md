# Smoke Detection Using Arduino

## AIM:

To detect density of Smoke and Ring a Buzzer in case it exceeds limit.

## Purpose:

Detecting Smoke Using Arduino.

## Short Description:

**Requirements:**

- Arduino UNO
- A Gas Sensor
- A Piezo Buzzer
- 1 Resistor
- USB
  (Tinkercad can also be used)

## Workflow:

- We initiate analog pin A0 as input for the gas sensor and the pin 6 as output for the Piezo Buzzer.
- We initiate a loop.
- We read the value of the gas sensor using analogRead that changes as we change the density of smoke.
- If the sensor value crosses the safety limit, we ring the buzzer using the tone() function.
- Else,we stop the buzzer from ringing by using the notone() function.

## Setup instructions:

- Assemble the circuit as shown below.
- Make sure to connect one end of the buzzer and the Gas sensor to ground(i.e. GND)
- Upload the code provided
- Run to see the project in action!
