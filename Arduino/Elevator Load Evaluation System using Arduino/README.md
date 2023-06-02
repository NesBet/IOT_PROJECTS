# Elevator Load Evaluation System using Arduino

## AIM:

Implementing a elevator Load Evaluation System using Arduino

## Purpose:

To detect elevator load, which will be deciding whether the elevator must move or not.

**Requirements:**

- Arduino UNO
- HX711 Load Cell
- L298N Motor Driver
- DC Motor / BO Motor
- Push Buttons
- LCD Display
- USB

## Workflow:

- First we initialise the Load Cell, LCD and define pinouts.
- Push Buttons are set up to control the movements of the sensor.
- Each time the respective push button is pressed, load cell checks the amount of weight and decides whether the elevator motor runs or not.
- If the weight is above the speficied weight limit, the motor does not run.
## Setup instructions:

- Assemble the circuit as shown below.
- Upload the code provided
- Run to see the project in action!
