📁 Project Overview 
This project contains a simple C++ program that demonstrates fundamental programming concepts such as classes, functions, integer division, modulo arithmetic, and formatted output. The program included is:

Time Converter – Converts between total seconds and HH:MM:SS format, and back again.

📌 Program Included

Time Converter File: Time-Converter.cpp This program accepts either a total number of seconds or a time in hours/minutes/seconds, and converts it to the other format. It uses:
A TimeConverter class with two member functions
Integer division (/) and the modulo operator (%)
<iomanip> for formatted, zero-padded output (setw, setfill)
A menu-driven interface using if / else if
User input using cin

The program calculates hours, minutes, and seconds using:

hours = totalSeconds / 3600
minutes = (totalSeconds % 3600) / 60
seconds = totalSeconds % 60

And converts back to total seconds using:

totalSeconds = (hours * 3600) + (minutes * 60) + seconds

🛠️ Requirements You can run this program using:

GCC / G++ Compiler

▶️ How to Run Using G++

g++ -o Time-Converter Time-Converter.cpp
./Time-Converter

🎯 Learning Objectives This project helps practice:

Basic C++ syntax
Classes and member functions
Variables and data types
Input and output using cin and cout
Integer division and modulo arithmetic
Formatted output with <iomanip>
Conditional statements (if / else if)
Menu-driven program design
Basic problem solving

📂 Project Structure

Time-Converter-Project/
│
├── README.md
└── Time-Converter.cpp

👨‍💻 Author KRISH SAPARIYA 
This repository is intended for learning and practicing fundamental C++ programming concepts, especially classes, functions, arithmetic operators, and formatted console output.
