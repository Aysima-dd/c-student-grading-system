# c-student-grading-system

A C application that processes student records and course grades using nested `struct` data structures and arrays.

## Features
- Stores personal student details (Name, Surname, Student ID).
- Manages multiple course records per student using nested structures.
- Automatically calculates weighted pass grades (40% Midterm + 60% Final).
- Displays clean, formatted terminal output.

## Concepts Covered
- C Structs & Nested Structs (`struct ders`, `struct sahis_bilgileri`)
- Arrays of Structs
- Nested `for` loops
- Weighted floating-point calculations

## How to Run
1. Compile the program using a C compiler (e.g., GCC):
   ```bash
   gcc main.c -o program
