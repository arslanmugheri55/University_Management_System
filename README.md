# University Management System (C++)

A console-based University Management System built in C++ to demonstrate Object-Oriented Programming (OOP) principles.

## Features
- Add and view **Students** (name, ID, program, CGPA)
- Add and view **Teachers** (name, ID, department, salary)
- Add and view **Courses** (course name, course code)
- Menu-driven CLI interface

## OOP Concepts Demonstrated
- **Abstraction & Inheritance:** Pure virtual `input()` and `display()` methods in `Person`, inherited by `Student` and `Teacher`
- **Encapsulation:** Private data members (`program`, `cgpa`, `department`, `salary`, etc.) accessed through member functions
- **Composition / Aggregation:** `University` manages collections of `Student`, `Teacher`, and `Course` objects

## How to Compile and Run

```bash
g++ -std=c++17 src/main.cpp -o university_system
./university_system
```
