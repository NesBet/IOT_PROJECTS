# Distance Sensing in Atmega32
## AIM:
To display distance using ultrasonic sensor on LCD module with Atmega32.

## Purpose:
To detect nearby object distances using ultrasonic sensor.

## Short Description:
**Requirements:**
- Microchip studio (Optional)
- Atmega32A
- LCD Module
- Ultrasonic (Sonar) sensor
- An Atmega32 development board (Optional)
- Atmega32 Programmer (Optional)
(SimulIDE can be used for simulation so all hardware is optional)

## Workflow:
- Firstly we initilised the display module and interrupt configuration.
- We have taken a while loop and triggering a pulse.
- When the echo comes the interrupt service routine is called.
- Interrupt service routine (ISR) calculates time duration.
- With time duration of echo pulse we detected the object distance by simple calculation. (Sound speed is taken 342m/s)

## Setup instructions:
- Assemble the circuit as shown in circuit diagram.
- Make sure to connect Ground to all components when using hardware.
- Make a gcc executable project in Microchip studio. 
- Upload the code provided
- Build the project and upload the generated hex file in simulIDE simulated atmega32.
- Run to see the project in action!

- Linux build (Optional)
- Microchip is not supported natively in linux. So you can install avr-libc and gcc-avr from apt package manager.
- For compiling copy paste these commands in terminal from that folder where the source file resides.
