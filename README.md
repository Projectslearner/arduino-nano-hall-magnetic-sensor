# Hall Magnetic Sensor

#### Project Overview

The Hall Magnetic Sensor project showcases how to use an Arduino Nano to detect a magnetic field with a Hall sensor. This project will light up an LED when a magnetic field is detected. It is useful for applications in security systems, contactless switches, and magnetic field detection.

#### Components Needed

1. **Arduino Nano**
2. **Hall Magnetic Sensor**
3. **LED** (optional if not using built-in LED)
4. **220Ω Resistor** (if using an external LED)
5. **Breadboard and Jumper Wires**



#### Block Diagram



#### Circuit Setup

1. **Connect Hall Magnetic Sensor to Arduino Nano:**
   - Connect the Vcc pin of the Hall sensor to the 5V pin on the Arduino Nano.
   - Connect the GND pin of the Hall sensor to the GND pin on the Arduino Nano.
   - Connect the output pin of the Hall sensor to digital pin 2 on the Arduino Nano.

2. **Connect LED to Arduino Nano (Optional):**
   - If using an external LED, connect the anode (long leg) of the LED to digital pin 13 on the Arduino Nano through a 220Ω resistor.
   - Connect the cathode (short leg) of the LED to the GND pin on the Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Wire the Hall magnetic sensor and the LED to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Connect the Arduino Nano to your computer using a USB cable.
   - Open the Arduino IDE and paste the provided code.
   - Select the appropriate board (Arduino Nano) and port from the Tools menu.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, bring a magnet near the Hall sensor.
   - Observe the LED lighting up and the sensor values printed on the Serial Monitor.

#### Applications

- **Security Systems:** Detect if a door or window is opened or closed.
- **Contactless Switches:** Use magnetic fields to trigger switches without physical contact.
- **Magnetic Field Detection:** Measure the presence and strength of magnetic fields.

#### Notes

- Ensure the correct orientation and connection of the Hall sensor and LED to prevent damage.
- Adjust the delay in the code if you need a faster or slower response time.
- Use appropriate resistors to protect the LED from excessive current.

---

🌐 [ProjectsLearner](https://github.com/Projectslearner/arduino-nano-hall-magnetic-sensor.git)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner