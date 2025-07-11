# Arduino Bluetooth-Controlled Car – Custom PCB

This repository contains a fully customized Bluetooth-controlled car project designed by **Daham Sathmin (OS Daham)**. It integrates a clean and compact **custom PCB layout**, removing the complexity of jumper wires while enhancing performance and assembly.

## Project Overview

Built on the Arduino UNO/Nano platform, this robotic car is controlled wirelessly via a Bluetooth module (HC-05/HC-06). The code interprets character commands from a mobile app and drives motors through an L298N motor driver.
This version includes a **professionally routed PCB** that simplifies connections and improves long-term reliability — ideal for students, DIYers, and robotics enthusiasts.


## Repository Contents

- `Arduino_BT_Controlling_Car_PCB.ino` – Complete Arduino sketch for car control  
- `Gerber_Arduino-Bluetooth-Controlling-Car-PCB.zip` – Custom PCB Gerber files designed by OS Daham

---

## Key Features

- Bluetooth-based control via smartphone  
- Compact, easy-to-assemble PCB design  
- Modular code structure for easy customization  
- Supports Forward, Backward, Left, Right, and Stop commands  
- Clean hardware layout ideal for robotics kits and classroom use


## Hardware List

| Component               | Description                         |
|------------------------|-------------------------------------|
| Arduino UNO / Nano     | Microcontroller board               |
| HC-05 / HC-06          | Bluetooth module                    |
| L298N Motor Driver     | Dual H-Bridge controller            |
| DC Motors (2 or 4)     | With compatible chassis             |
| Custom PCB             | Designed by OS Daham (Gerber file) |
| Power Source           | 18650 cells / 9V adapter            |


## Getting Started

1. **Upload the Sketch**  
   - Open `Arduino_BT_Controlling_Car_PCB.ino` in Arduino IDE  
   - Select board and COM port, then upload the code

2. **Assemble the Hardware**  
   - Solder the components to the custom PCB  
   - Connect motor driver, Bluetooth module, motors, and power supply

3. **Mobile Bluetooth Control**  
   - Pair phone with HC-05 (default PIN: `1234`)  
   - Use any Bluetooth controller app  
   - Send the following character commands:
     - `F` – Forward  
     - `B` – Backward  
     - `L` – Left  
     - `R` – Right  
     - `S` – Stop


## PCB Design

This version includes a **custom-designed PCB layout** created specifically for this Bluetooth-controlled car project. You can use the Gerber files to fabricate your own professional board.

**Gerber Download:**  
[`Gerber_Arduino-Bluetooth-Controlling-Car-PCB.zip`](Gerber_Arduino-Bluetooth-Controlling-Car-PCB.zip)

**How to Use:**
- Upload the `.zip` file to a PCB manufacturer like:
  - [JLCPCB](https://jlcpcb.com)
  - [PCBWay](https://pcbway.com)
  - [Seeed Fusion](https://www.seeedstudio.com/fusion.html)
- Recommended specs: 2-layer, 1.6mm thickness, HASL finish

---

## Advanced Customization Ideas

- Add ultrasonic sensors for obstacle avoidance  
- Use PWM for motor speed control  
- Monitor battery status through analog input  
- Build a custom Android app with MIT App Inventor  
- Upgrade to ESP8266 or ESP32 for Wi-Fi IoT control

---

## License

This project is released under the **MIT License**.  
Use, modify, or share it freely for educational or non-commercial purposes.

---

## Author

**Daham Sathmin**

Content in Sinhala and English:  
Arduino | Robotics | IoT | PCB Design | Programming

---

## Support

If you find this project helpful, consider starring the repo or sharing it with others in the maker community.
