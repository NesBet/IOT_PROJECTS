# Aim
To build API for LCD

# Purpose
To Test this API in a build a sample app which write Mohamed Ismail then new line ahmed and number 30 
not a string its an integer number.
<br>

# Component required
Simulation environment - Proteus 8
Atmega 32
LCD screen
Wires
Power source - Laptop or battery
Potentiometer 1K
<br>

# Description
The idea is to built a reusable drivers which can be used in other Projects for this purpose can be achived as follow:
Every Microcontroller has interal peripherals to interface with like DIO pins, timer, and ADC, etc also it can interfaced with external peripherals like LEDS, LCD, and seven segment, etc.
The external peripherals can deal with Microcontroller through Internal peripherals like DIO and this will make extenal peripherals reusable with every Microconroller. also the same thing for internal peripherals
but with change the addresses of the registers and their sizes. so we will start be building the DIO (Digital Input Output for dealing with pins) peripheral which needed for LCD peripheral. then Use The made API (Driver) to configure the LCD. This Driver makes it easier to operate with the LCD since it consists for many functions like LCD_String_xy, LCD_SendNumber etc.
<br>

# Setup 
Connect the circuit diagram as shown in the image and press the simulation button
