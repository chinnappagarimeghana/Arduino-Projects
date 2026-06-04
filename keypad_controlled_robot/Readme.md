# 🤖 Keypad Controlled Robot using Arduino UNO

A robot controlled through a 4x4 keypad connected to an Arduino UNO. The robot performs directional movements based on keypad inputs, allowing manual navigation without wireless communication.

---

## 🚀 Features

* Keypad-based robot control
* Forward movement
* Backward movement
* Left turn
* Right turn
* Stop function
* Arduino UNO based system
* Simple and responsive control

---

## 🛠 Components Used

| Component          | Quantity    |
| ------------------ | ----------- |
| Arduino UNO        | 1           |
| 4x4 Keypad         | 1           |
| L293D Motor Driver | 1           |
| DC Motors          | 2           |
| Robot Chassis      | 1           |
| Wheels             | 2           |
| Castor Wheel       | 1           |
| Battery Pack       | 1           |
| Jumper Wires       | As Required |

---

## ⚙️ Working Principle

The Arduino continuously scans the keypad for key presses. When a valid key is detected, it executes the corresponding movement command by controlling the motors through the L293D motor driver.

---

## 🎮 Keypad Controls

| Key | Action        |
| --- | ------------- |
| 2   | Move Forward  |
| 4   | Turn Left     |
| 6   | Turn Right    |
| 7   | Move Backward |
| 5   | Stop          |

---

## 🔌 Circuit Connections

### Keypad

| Keypad Connection | Arduino Pin |
| ----------------- | ----------- |
| Row 1             | D2          |
| Row 2             | D3          |
| Row 3             | D4          |
| Row 4             | D5          |
| Column 1          | D6          |
| Column 2          | D7          |
| Column 3          | D8          |
| Column 4          | D13         |

### Motor Driver

| Arduino Pin | Function        |
| ----------- | --------------- |
| D12         | Motor 1 Input 1 |
| D11         | Motor 1 Input 2 |
| D10         | Motor 2 Input 1 |
| D9          | Motor 2 Input 2 |

---

## 📊 System Flow

1. Read keypad input.
2. Identify the pressed key.
3. Execute the corresponding movement command.
4. Drive the motors through the L293D motor driver.
5. Repeat continuously.

---

## 🧪 Project Outcomes

✅ Successful keypad-based navigation

✅ Accurate directional control

✅ Real-time response to user inputs

✅ Stable motor operation

---



