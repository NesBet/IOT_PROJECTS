# Home Security Alert System
## Aim
To provide alert security system which prevents an outsider to barge into your house using Arduino.
## Purpose
By pressing correct password on keyboard, the servomotor will rotate at 90 degrees and the locked door unlocks. And if we press incorrect password, the piezo buzzer create noise.
## Components Used
- Arduino Uno R3
- Keypad
- Piezo Buzzer
- LCD
- Servo motor 
- Wires

## Short Description 
When we start simulation, the servomotor rotates in anti-clockwise direction of 90 degrees, that tells, main door of house is locked now. If anyone presses incorrect password, the door will remain locked and the Piezo buzzer on.
No one, other than who know the correct password, can open the door.

## Workflow of the Project
- Arduino takes input from keypad, that is, password of length 4, consisting of digits and letters, output display on the LCD. After pressing 4 digits/letters, arduino checks whether it is a correct password or not. In code, we have decided the correct password, if anybody want to change the password, he/she can do by modifying the code.
- If it is a correct password, then the servomotor rotates at 90 degrees, and door is opened now. It is opened for 5 seconds, the count down will be displayed on LCD. After 5 sec, the servomotor rotates at 90 degrees anti-clockwise
and closes the door. 
- If it is incorrect password, then the piezo buzzer creates noise and in LCD, message appears "Get away".

## Setup Instructions
- Use Tinkercad
- Make the circuit as seen in the images.
- Upload the source code.
- Type 4 digits/letters in keypad, see the results.
