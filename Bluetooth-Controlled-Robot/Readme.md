# 📱 Bluetooth Controlled Robot using Arduino UNO

A wireless robot controlled through a smartphone using Bluetooth communication. The robot receives movement commands from a Bluetooth-enabled mobile application and performs directional movements such as forward, backward, left, right, and diagonal turns.

---

## 🚀 Features

* Wireless Bluetooth control
* Forward and backward movement
* Left and right turning
* Diagonal movement support
* Stop functionality
* LED control through Bluetooth
* Arduino UNO based system
* Real-time command execution

---

## 🛠 Components Used

| Component              | Quantity    |
| ---------------------- | ----------- |
| Arduino UNO            | 1           |
| HC-05 Bluetooth Module | 1           |
| L293D Motor Driver     | 1           |
| DC Gear Motors         | 2           |
| Robot Chassis          | 1           |
| Wheels                 | 2           |
| Castor Wheel           | 1           |
| LED                    | 1           |
| Battery Pack           | 1           |
| Jumper Wires           | As Required |

---

## ⚙️ Working Principle

The HC-05 Bluetooth module receives commands from a smartphone application and sends them to the Arduino through serial communication.

Based on the received command, the Arduino controls the motors using the L293D motor driver and performs the required movement.

---

## 🎮 Bluetooth Commands

| Command | Action        |
| ------- | ------------- |
| F       | Move Forward  |
| B       | Move Backward |
| L       | Turn Left     |
| R       | Turn Right    |
| A       | Forward Left  |
| C       | Forward Right |
| S       | Stop Robot    |
| O       | LED ON        |
| s       | LED OFF       |

---

## 🔌 Circuit Connections

### HC-05 Bluetooth Module

| HC-05 Pin | Arduino UNO |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| TX        | RX          |
| RX        | TX          |

### Motor Driver

| Arduino Pin | Function        |
| ----------- | --------------- |
| D12         | Motor 1 Input 1 |
| D11         | Motor 1 Input 2 |
| D10         | Motor 2 Input 1 |
| D9          | Motor 2 Input 2 |

### LED

| Arduino Pin | Component  |
| ----------- | ---------- |
| D13         | Status LED |

---

## 💻 Software

* Arduino IDE
* Embedded C/C++
* Bluetooth Control Application

---

## 📊 System Flow

1. Smartphone sends Bluetooth command.
2. HC-05 receives the command.
3. Arduino reads the serial data.
4. Command is interpreted.
5. Motor driver executes the corresponding movement.
6. Robot responds instantly.

---

## 🧪 Project Outcomes

✅ Successful wireless control

✅ Smooth directional movement

✅ Reliable Bluetooth communication

✅ Real-time LED control

---

