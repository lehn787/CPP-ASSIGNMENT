# Student Management System

## Introduction

The Student Management System is a simple C++ mini project developed to demonstrate the basic concepts of Object-Oriented Programming (OOP). The program stores and manages student information such as roll number, name, and marks using a class called `Student`.

The project uses constructors, getters, setters, member functions, arrays of objects, and object passing to functions. It also validates marks entered for students and displays their pass or fail status.

## Objectives

- To understand classes and objects in C++.
- To implement encapsulation using private data members.
- To use parameterized constructors.
- To learn getter and setter functions.
- To perform validation using member functions.
- To work with arrays of objects.
- To pass objects as function arguments.

## Features

- Stores student roll number, name, and marks.
- Uses a parameterized constructor for initialization.
- Validates marks before storing them.
- Displays student information.
- Determines pass or fail status.
- Supports multiple student records using an array of objects.

## Class Details

### Class Name: Student

#### Data Members

- `rollNo`
- `name`
- `marks`

#### Member Functions

- `Student(int r, string n, float m)`
- `getRollNo()`
- `getName()`
- `getMarks()`
- `setMarks()`
- `display()`

## Working of the Program

1. Student objects are created using the parameterized constructor.
2. Marks are validated using the `setMarks()` function.
3. Invalid marks are automatically changed to `0`.
4. Student details are displayed using the `display()` function.
5. The `printResult()` function checks whether a student has passed or failed.
6. Students are stored and managed using an array of objects.

## Passing Criteria

- Marks greater than or equal to 40 → PASS
- Marks less than 40 → FAIL

## Sample Output

```text
Invalid marks for Meera, set to 0

101 | Asha | 82
102 | Rahul | 35
103 | Meera | 0

Asha: PASS
Rahul: PASS
Meera: FAIL
```

## Concepts Used

- Classes and Objects
- Encapsulation
- Constructors
- Getters and Setters
- Data Validation
- Member Functions
- Array of Objects
- Object as Function Argument

## Software Requirements

- C++ Compiler
- Code::Blocks / Dev-C++
- Visual Studio Code
- Windows or Linux Operating System

## Conclusion

The Student Management System is a beginner-level C++ project that demonstrates important Object-Oriented Programming concepts. The project helps in understanding how classes, objects, constructors, getters, setters, and member functions can be used to manage student data effectively.

## Author

**Muhammed Lahan Kurikkal**  
Bachelor of Computer Applications (BCA)

**Project Title:** Student Management System
