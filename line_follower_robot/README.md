# 🤖 Arduino UNO Line Follower Robot

An autonomous line-following robot built using **Arduino UNO**, **dual IR sensors**, and an **L293D motor driver**. The robot detects and follows a black line on a white surface by continuously monitoring sensor inputs and adjusting motor movement accordingly.

---

## 📌 Project Overview

This project demonstrates the fundamentals of autonomous robotics using infrared sensing and motor control. The robot follows a predefined path without human intervention, making it an excellent beginner project for learning embedded systems, sensor interfacing, and robotic navigation.

---

## ✨ Features

* Autonomous line tracking
* Real-time path correction
* Dual IR sensor-based navigation
* Forward, left, right, and stop movements
* Arduino UNO based control system
* L293D motor driver integration
* Low-cost and beginner-friendly design
* Easily extendable for maze solving and PID control

---

## 🛠 Components Used

| Component             | Quantity    |
| --------------------- | ----------- |
| Arduino UNO           | 1           |
| L293D Motor Driver IC | 1           |
| IR Sensor Module      | 2           |
| BO Motors (60 RPM)    | 2           |
| Wheels                | 2           |
| Castor Wheel          | 1           |
| Robot Chassis         | 1           |
| 7.4V/9V Battery       | 1           |
| Jumper Wires          | As Required |

---

## ⚙️ Working Principle

The robot uses two infrared sensors positioned on either side of the line.

* Black surfaces absorb infrared light.
* White surfaces reflect infrared light.

Based on sensor readings, the Arduino determines the robot's movement direction.

### Navigation Logic

| Left Sensor | Right Sensor | Action       |
| ----------- | ------------ | ------------ |
| White       | White        | Move Forward |
| Black       | White        | Turn Left    |
| White       | Black        | Turn Right   |
| Black       | Black        | Stop         |

---

## 🔌 Circuit Connections

### IR Sensors

| Sensor          | Arduino Pin |
| --------------- | ----------- |
| Left IR Sensor  | D2          |
| Right IR Sensor | D4          |

### L293D Motor Driver

| Motor Driver Pin | Arduino Pin |
| ---------------- | ----------- |
| ENA              | D5          |
| IN1              | D6          |
| IN2              | D7          |
| IN3              | D9          |
| IN4              | D10         |
| ENB              | D8          |

### Power Connections

* Arduino powered using 7.4V–9V battery.
* L293D supplied with motor power and logic power.
* Common ground shared between all modules.

---

## 💻 Arduino Program

The Arduino continuously reads both IR sensors and executes one of the following actions:

* Move Forward
* Turn Left
* Turn Right
* Stop

Motor directions are controlled through the L293D H-Bridge motor driver.

---

## 📊 System Flow

1. Read Left Sensor
2. Read Right Sensor
3. Compare Sensor States
4. Decide Direction
5. Drive Motors
6. Repeat Continuously

---

## 🧪 Testing Results

✅ Successfully follows straight paths

✅ Detects left and right turns

✅ Stops when both sensors detect the line

✅ Stable operation on white surfaces with black tracks

---

## 🚧 Challenges Faced

* IR sensor calibration
* Motor speed balancing
* Sensor placement optimization
* Battery voltage fluctuations

---

## 🔧 Future Improvements

* PID-based line tracking
* Adjustable speed control
* Maze solving algorithm
* Obstacle detection using ultrasonic sensor
* Bluetooth monitoring and control
* OLED/LCD status display

---



## 📚 Learning Outcomes

Through this project, I learned:

* Arduino programming
* Embedded C development
* Motor driver interfacing
* IR sensor calibration
* Robotic navigation concepts
* Autonomous control systems

---

## 🏆 Applications

* Educational robotics
* Warehouse navigation
* Industrial automation
* Automated guided vehicles (AGVs)
* Robotics competitions

---

