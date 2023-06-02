# Battery Powered Step Counter

## AIM:

To count number of steps using battery powered Arduino.

## Purpose:

To implement a Battery Powered Step Counter.

## Short Description:

**Requirements:**

- Arduino UNO
- 1 LCD Display
- 1 Tilt Sensor
- 1 Resistor
- 1 9V Battery(for power source)
  (Tinkercad can also be used)

## Workflow:

- We initiate digital pin 7 as input for the tilt sensor and the LCD Display as output for the steps count value.
- We use a 9V battery as power source for the circuit.
- We initiate a loop.
- We read the value of the tilt sensor using digitalRead that changes as we change the orientation of the tilt sensor.
- We extract the sensorValue and store it in a variable c.
- Variable b has the oldtilt sensor value.This way we can keep a track and count steps only when orientation of tilt sensor changes.
- We keep adding the sensorValue to the olda variable to store it as total steps count in variable a.
- We print the value of a on the lcd display thereby showing the total number of steps.
