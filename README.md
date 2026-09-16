# Engineering Project Portfolio

Welcome to my engineering project portfolio. This portfolio highlights my hands-on experience in controls, automation, embedded systems, robotics, and system integration.

---

# Robotic Pharmaceutical Packaging System

## Project Overview

<img width="511" height="739" alt="image" src="https://github.com/user-attachments/assets/39456bd9-7832-44c8-9e67-15d54eaf96c1" />

The Robotic Pharmaceutical Packaging System is an automated system designed to demonstrate the pharmaceutical packaging process using robotic arms, a conveyor system, sensors, and embedded controls.

The system automates the movement and handling of pharmaceutical bottles throughout different stages of the packaging process.

## My Role — Conveyor Control System

My primary responsibility for this project is the design and implementation of the conveyor belt control system.

<img width="826" height="601" alt="image" src="https://github.com/user-attachments/assets/f144c59e-0220-4738-b38c-b1297ab4be56" />

My work includes:

- Designing the conveyor control logic
- Programming an Arduino UNO R4 WiFi
- Integrating sensors for object detection
- Controlling a 12V DC conveyor
- Testing and troubleshooting the conveyor system
- Integrating the conveyor with the overall robotic packaging process

## Project Demo

[Watch Conveyor Control Validation](https://github.com/aort29/Engineering-Project-Portfolio/raw/refs/heads/main/videos/Conveyor%20Control%20Validation.mp4)

[Watch Conveyor Control System Demonstration](https://github.com/aort29/Engineering-Project-Portfolio/raw/refs/heads/main/Control%20System%20Demonstration%20Video.mp4)

[Watch Full Pharmaceutical Packaging System Demonstration](https://github.com/aort29/Engineering-Project-Portfolio/raw/refs/heads/main/Pharmaceutical%20Products%20Packaging%20Video%20(3).mp4)

## Hardware & Technology

- Arduino UNO R4 WiFi
- 12V DC Conveyor
- HC-SR04 Ultrasonic Sensors
- Solid-State Relay (SSR)
- UFactory Lite 6 Robotic Arms
- Arduino IDE
- Embedded C/C++

## Technical Documentation

### Conveyor Control Schematic

The conveyor control system uses an Arduino UNO R4 WiFi to process input from two ultrasonic sensors and control the 12V DC conveyor through the switching circuitry.

<img width="1425" height="711" alt="image" src="https://github.com/user-attachments/assets/598dc427-5b70-486c-bd66-7b5508b94951" /> [View Full Conveyor Control Schematic]


### Control Logic

The conveyor operates using two object-detection points:

- **Sensor 1:** Detects an object within 15 cm, stops the conveyor for 3 seconds, and then resumes operation.
- **Sensor 2:** Detects an object within 15 cm and keeps the conveyor stopped while the object remains present.
- The Arduino continuously monitors both sensors and controls the conveyor based on the detected object position.

### Arduino Source Code

[View Conveyor Control System Arduino Code](code/conveyor_control_system.ino.ino)

---

## Contact

**Ashley Ortiz**  
Computer Engineering
