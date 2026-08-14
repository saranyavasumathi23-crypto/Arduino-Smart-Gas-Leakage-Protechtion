Arduino Based Smart Gas Leakage Protection System

📌 Project Overview

The Arduino Based Smart Gas Leakage Protection System is an embedded safety project designed to detect gas leakage and automatically take protective actions.

The system uses an MQ-2 gas sensor to monitor gas levels. When the detected gas level exceeds the predefined threshold, the Arduino UNO activates an alarm, turns ON an exhaust fan, and operates a servo motor to close the gas regulator.

✨ Features

- Gas leakage detection using MQ-2 sensor
- Automatic gas regulator control using servo motor
- Exhaust fan activation during gas leakage
- Audible warning using buzzer
- Arduino UNO based control system
- MOSFET-based exhaust fan control
- Real-time gas-level monitoring through Serial Monitor

🛠️ Hardware Components

Component| Purpose
Arduino UNO| Main controller
MQ-2 Gas Sensor| Detects gas leakage
MG995 Servo Motor| Controls the gas regulator
Gas Regulator| Controls gas flow
Buzzer| Provides an audible warning
12V Exhaust Fan| Removes accumulated gas
MOSFET Driver Circuit| Controls the exhaust fan
5V DC Supply| Powers Arduino and sensor section
12V DC Supply| Powers exhaust fan
Jumper Wires & Breadboard| Circuit connections

🔌 Pin Configuration

Component| Arduino Pin
MQ-2 Gas Sensor| A0
Buzzer| D8
Exhaust Fan / MOSFET Control| D7
MG995 Servo Signal| D9

⚙️ Working Principle

1. The MQ-2 gas sensor continuously monitors the surrounding environment.
2. The sensor sends an analog gas-level value to the Arduino UNO through pin A0.
3. The Arduino compares the sensor value with the predefined threshold value of 400.
4. If the gas value exceeds 400:
   - The buzzer is turned ON.
   - The exhaust fan is turned ON through the MOSFET driver.
   - The servo motor moves to 90° to operate the gas regulator toward the closed position.
5. When the gas value returns below the threshold:
   - The buzzer is turned OFF.
   - The exhaust fan is turned OFF.
   - The servo motor returns to 0°.

💻 Software

The project is programmed using the Arduino IDE.

Arduino Library

The following library is required:

#include <Servo.h>

Gas Detection Threshold

The current gas threshold in the program is:

int gasThreshold = 400;

This value can be adjusted based on sensor calibration and testing conditions.

📷 Project Prototype

"Project Prototype" (Project-prototype.jpeg)

🔧 Circuit Diagram

"Circuit Diagram" (Circuit-diagram.jpeg)

📂 Project Files

- "Arduino Source Code" (Code/gas_leakage_protection.ino)
- "Project Prototype Photo" (Project-prototype.jpeg)
- "Circuit Diagram" (Circuit-diagram.jpeg)

🚀 Future Enhancements

The project can be further improved by adding:

- GSM or Wi-Fi based mobile notifications
- LCD/OLED display for gas-level monitoring
- IoT/cloud monitoring
- Gas-level data logging
- Battery backup
- PCB-based implementation
- Certified automatic gas shut-off components
- Improved sensor calibration and fault detection

🎯 Applications

This project can be used as an educational prototype for:

- Gas leakage detection
- Arduino-based automation
- Embedded safety systems
- Home safety automation concepts
- Industrial safety demonstrations
- IoT and smart monitoring projects

⚠️ Safety Disclaimer

This project is an educational prototype and should not be considered a certified gas-safety device.

Gas systems can involve fire, explosion, and other serious hazards. This prototype should not be used as the sole safety mechanism in a real LPG or natural-gas installation. Real-world systems should use appropriately rated and certified safety components and should be installed and tested by qualified professionals.

👩‍💻 Project Information

Project Name: Arduino Based Smart Gas Leakage Protection System

Platform: Arduino UNO

Project Type: Embedded Systems / Safety Automation

Main Sensor: MQ-2 Gas Sensor

Main Actuator: MG995 Servo Motor

---

⭐ This project demonstrates how an Arduino-based embedded system can detect gas leakage and automatically respond to improve safety.
