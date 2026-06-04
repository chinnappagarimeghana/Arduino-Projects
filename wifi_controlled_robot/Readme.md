# 🤖 NodeMCU WiFi Controlled Robot

A WiFi-controlled robot built using a NodeMCU ESP8266 and L298N motor driver. The robot receives commands over a WiFi network and performs basic directional movements including forward, backward, left, and right navigation.

---

## 🚀 Features

* Wireless WiFi control
* NodeMCU ESP8266 based system
* Forward movement
* Backward movement
* Left turn
* Right turn
* Real-time command execution
* L298N motor driver integration

---

## 🛠 Hardware Requirements

| Component          | Quantity    |
| ------------------ | ----------- |
| NodeMCU ESP8266    | 1           |
| L298N Motor Driver | 1           |
| DC Gear Motors     | 2           |
| Robot Chassis      | 1           |
| Wheels             | 2           |
| Castor Wheel       | 1           |
| Battery Pack       | 1           |
| Jumper Wires       | As Required |

---

## ⚙️ Working Principle

The NodeMCU connects to a WiFi network and hosts a web server. Movement commands are sent from a mobile device or computer through the network. The ESP8266 receives the commands and controls the motors via the L298N motor driver.

---

## 🎮 Control Commands

| Command | Action        |
| ------- | ------------- |
| F       | Move Forward  |
| B       | Move Backward |
| L       | Turn Left     |
| R       | Turn Right    |

---

## 🔌 Circuit Connections

| NodeMCU Pin | L298N Pin |
| ----------- | --------- |
| D1          | ENA       |
| D2          | IN1       |
| D3          | IN2       |
| D4          | IN3       |
| D5          | IN4       |
| D6          | ENB       |

---

## 💻 Software Requirements

* Arduino IDE
* ESP8266 Board Package
* ESP8266WiFi Library
* ESP8266WebServer Library
* ArduinoOTA Library

---

## 📊 System Flow

1. Power on the robot.
2. Connect NodeMCU to WiFi.
3. Start the web server.
4. Receive movement command.
5. Process the command.
6. Control the motors through L298N.
7. Execute robot movement.

---

## 🧪 Project Outcomes

✅ Successful WiFi communication

✅ Reliable wireless robot control

✅ Real-time directional movement

✅ Stable motor operation

---


## 🎯 Applications

* Educational robotics
* Wireless vehicle control
* IoT projects
* Remote navigation systems
* Embedded systems applications

