# Project: Alexa-Powered Animated Robot

## 📝 Overview
This project aims to modify an Alexa device and integrate it with a **Nextion TFT display** to create an expressive, animated assistant. The goal is to build a robot that can visually interact with users using a mouth animation and respond dynamically to voice commands.

## 🔧 Hardware Components
- **Amazon Echo (4th/5th Gen)** – Used as the voice assistant.
- **Arduino Mega 2560** – Controls the Nextion display and processes commands.
- **Nextion TFT Display** – Displays animated mouth movements.
- **Jumper Wires** – Connects the Nextion display to the Arduino.
- **3.5mm Audio Splitter & Amplifier** – Routes Alexa’s audio to a speaker and visualizer.
- **Power Supply (5V/12V)** – Powers the components.
- **MicroSD Card** (formatted to FAT32) – Uploads GUI files to Nextion.

## 🔌 Wiring Setup
| **Nextion Pin** | **Arduino Mega Pin** |
|---------------|----------------|
| TX (Nextion) | RX2 (Pin 17) |
| RX (Nextion) | TX2 (Pin 16) |
| GND | GND |
| VCC | 5V |

## ⚙️ Software & Configuration
1. **Nextion Editor** – Used to design and compile the TFT display interface.
2. **Arduino IDE** – Uploads code to the Arduino Mega for serial communication.
3. **GitHub Repository** – Tracks progress, logs changes, and stores necessary files.

## 🛠 Current Progress
✅ Installed **Nextion Editor** and designed basic text display.
✅ Connected **Nextion TFT to Arduino Mega** using proper TX/RX wiring.
✅ Formatted **microSD card** to FAT32 and uploaded `.TFT` file.
✅ Verified **serial communication** using `Serial2` on the Arduino.

## ❌ Issues Faced & Fixes
- **Nextion not responding to text updates** → Fixed by ensuring correct wiring and adding `0xFF 0xFF 0xFF` to commands.
- **microSD card not detected** → Reformatted to FAT32 and ensured `.TFT` was in the root directory.
- **Alexa 5th Gen lacks a 3.5mm audio jack** → Consider using Bluetooth or an external DAC adapter.

## 🚀 Next Steps
- Implement **animated mouth movements** on Nextion based on Alexa’s speech.
- Explore **realistic lip-syncing** and alternate animation styles.
- Investigate **therapy-focused AI module** for Alexa to enhance conversations.
- Optimize **Arduino code** for faster, more responsive updates.

## 📂 Repository Structure
```
/nextion_project
│── /code                 # Arduino Sketches
│── /nextion_gui          # GUI design files for Nextion Editor
│── README.md             # This documentation
│── project_log.md        # Development notes
```

## 🏗 Future Expansions
- Add **facial recognition** to personalize interactions.
- Implement **gesture control** using sensors.
- Integrate **machine learning** for AI-driven expressions.

---
### **👥 Contributors**
👤 **David Lucas** – Lead Developer

📌 *Feel free to contribute or raise an issue in the repository!*

