# OOP-Invoice

A simple C++ program that demonstrates the fundamentals of Object-Oriented Programming (OOP) by modeling an invoice system.

## 📚 Overview

This project was developed as part of **CIS554: Object Oriented Programming in C++**. It showcases key OOP concepts including:

- **Encapsulation** using private data members and public getter/setter methods.
- **Constructors** (default and parameterized) to initialize objects.
- A **member function** that calculates the total invoice amount, with basic validation logic.
- Clean separation of class declaration (`Invoice.h`), implementation (`Invoice.cpp`), and usage (`main.cpp`).

## 🚀 Features

- Define an `Invoice` class with:
  - Part number
  - Description
  - Quantity
  - Price per item
- Calculate the invoice total (`quantity × price`) while preventing negative values.
- Demonstrate class functionality using:
  - Constructor-based object initialization
  - Setters and getters
  - Console output
- Optional: User input to create a custom invoice

## 🛠️ Files

- `Invoice.h` – Class declaration
- `Invoice.cpp` – Class implementation
- `main.cpp` – Demonstrates how to use the `Invoice` class
- `README.md` – Project overview and usage instructions

## 🧪 How to Run

1. Compile the program:

   ```bash
   g++ -std=c++11 -o invoice main.cpp Invoice.cpp then run ./Invoice
