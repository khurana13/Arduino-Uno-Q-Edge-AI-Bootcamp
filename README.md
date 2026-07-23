# Arduino UNO Q – Edge AI Bootcamp Labs

This repository contains the hands-on labs completed during the **Arduino Edge AI Bootcamp** using the **Arduino UNO Q**.

## About Arduino UNO Q

The **Arduino UNO Q** is a compact development board that combines the capabilities of a **microprocessor and a microcontroller**.

It can run Linux-based applications, Python programs, Arduino sketches and Edge AI workloads while also supporting real-time hardware control. This makes it suitable for embedded systems, IoT, computer vision and intelligent edge applications.

## Key Features

- Microprocessor and microcontroller on one board
- Linux and Python support
- Arduino sketch programming
- Edge AI and computer vision support
- Real-time hardware control
- Wi-Fi and Bluetooth connectivity
- Arduino shield compatibility
- Development through Arduino App Lab

## Labs

### Lab 01 – Terminal-Based LED Control

Controlled the onboard red LED directly through Linux terminal commands and explored hardware interaction through system files.

### Lab 02 – LED Blinking Using Python

Created a Python application to blink the onboard red LED at one-second intervals using Arduino App Utilities.

### Lab 03 – RGB LED Color Cycle Using Python

Used Python to cycle the onboard RGB LED through red, green and blue colours with a short delay between each colour.

### Lab 04 – RGB LED Control Using Arduino Sketch on the MCU

Programmed the onboard RGB LED using an Arduino sketch and explored active-low LED behaviour with digital output pins.

### Lab 05 – Real-Time Object Detection Using Edge AI

In this lab, I explored real-time object detection using the **Arduino UNO Q** and **Arduino App Lab**.

The application captured live camera input and used an AI model to identify objects by displaying bounding boxes, class labels and confidence scores. This activity demonstrated how computer vision models can run directly on an edge device without relying entirely on cloud processing.

#### Key Learnings

- Running an object-detection application on an edge device
- Understanding bounding boxes, labels and confidence scores
- Processing live camera input
- Exploring computer vision and Edge AI
- Understanding the benefits of local AI processing such as faster response and reduced dependency on cloud services

## Acknowledgement

These labs were completed during the Arduino Edge AI Bootcamp and provided hands-on experience with Linux, Python, Arduino programming and hardware control using the Arduino UNO Q.

## Repository Structure

```text
Arduino-UNO-Q-Edge-AI-Bootcamp/
│
├── README.md
│
├── Lab 01 - Terminal-Based LED Control/
│   └── command.txt
│
├── Lab 02 - LED Blinking Using Python/
│   └── main.py
│
├── Lab 03 - RGB LED Color Cycle Using Python/
│   └── main.py
│
├── Lab 04 - RGB LED Control Using Arduino Sketch on the MCU/
│   └── rgb_led_cycle.ino
│
├── Lab 05 - Real Time Object Detection/
│   └── README.md
│
└── images/
    ├── Lab 01.jpeg
    └── Lab 05.png
