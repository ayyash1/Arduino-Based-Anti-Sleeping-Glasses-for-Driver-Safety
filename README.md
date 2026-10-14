# 🚗 Arduino-Based Anti-Sleeping Glasses for Driver Safety

## 📌 Overview
The **Anti-Sleeping Glasses** project is an Arduino-based embedded system designed to detect driver drowsiness through prolonged eye closure. An eye sensor mounted on the glasses monitors the driver's eyes. When the eyes remain closed beyond a predefined threshold (e.g., one second), the system triggers an audible alarm. After three warning alerts, a prototype braking mechanism is activated to demonstrate an additional safety response.

## ✨ Features
- 👁️ Eye closure detection using an eye sensor
- ⚙️ Real-time monitoring with an Arduino microcontroller
- 🔊 Audible alarm to warn the driver
- 🚨 Up to three warning alerts
- 🛑 Prototype braking mechanism after repeated warnings
- 💻 Embedded C/C++ programming

## 🛠️ Hardware Components
- Arduino microcontroller
- Eye sensor
- Buzzer or alarm
- Prototype braking mechanism and control components
- Connecting wires
- Glasses frame
- Power supply

## ⚙️ How It Works
1. The eye sensor monitors the driver's eye state.
2. The Arduino processes the sensor readings.
3. If the eyes remain closed for a predefined duration, the system detects a potential drowsiness event.
4. An audible alarm alerts the driver.
5. After three warning alerts, the prototype activates its braking mechanism.

## 🔄 System Workflow

```text
Eye Sensor
    |
    v
Arduino Microcontroller
    |
    v
Monitor Eye Closure
    |
    v
Eyes Closed Beyond Threshold?
    |
    +-- No --> Continue Monitoring
    |
   Yes
    |
    v
Trigger Audible Alarm
    |
    v
Repeat Warnings (Up to 3 Times)
    |
    v
Activate Prototype Braking Mechanism
```

## 💻 Technologies Used
- **Programming Language:** Embedded C/C++
- **Microcontroller:** Arduino
- **Sensor Technology:** Eye-closure detection
- **Domain:** Embedded Systems and Driver Safety

## 🎯 Applications
- Driver drowsiness detection prototypes
- Embedded safety systems
- Sensor-based monitoring applications
- Microcontroller and automation projects

## 🔮 Future Improvements
- Distinguish normal blinking from prolonged eye closure.
- Improve detection accuracy under different lighting conditions.
- Integrate additional drowsiness indicators.
- Add configurable alarm thresholds.
- Improve braking-control safety and reliability.

## ⚠️ Safety Disclaimer
This project is an educational prototype, not a certified automotive safety system. The braking mechanism is intended for prototype demonstration and must not be connected to a real vehicle's braking system without professional engineering and rigorous safety validation.

## 📌 Project Information
- **Project Name:** Anti-Sleeping Glasses
- **Category:** Embedded Systems
- **Platform:** Arduino
- **Status:** Academic Project

## 🤝 Contributions
Suggestions and improvements are welcome. Feel free to fork this repository and submit a pull request.

---
Developed as an embedded systems project focused on driver safety and drowsiness detection.
