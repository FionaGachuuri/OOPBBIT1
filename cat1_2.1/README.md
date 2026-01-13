# Takeaway CAT 30 Marks

**Answer any Five (5) questions**

*Code Examples are meant for guidance only*

## 1. Pointers (6 marks)
Write a C++ program that demonstrates the use of pointers to swap the values of two integers.

**Requirements:**
- Use pointers to swap the values of two integers.
- Implement a function `swap(int*, int*)` that takes two integer pointers as arguments.
- Test the function in the `main()` function.

**Code Example:**
```cpp
#include <iostream>
void swap(int*, int*);
int main() {
    int a = 5;
    int b = 10;
    // Call swap function
    return 0;
}
```

---

## 2. Parameterized Constructors (6 marks)
Design a `Student` class with attributes `name`, `adminNumber`, and `marks`. Implement a parameterized constructor to initialize the object.

**Requirements:**
- Implement a parameterized constructor `Student(string, int, double)` to initialize the object.
- Implement getter methods for `name`, `adminNumber`, and `marks`.
- Test the class in the `main()` function.

---

## 3. Memory Management (6 marks)
Write a C++ program that demonstrates dynamic memory allocation using `new` and `delete`.

**Requirements:**
- Allocate memory for an integer array of size 5 using `new`.
- Initialize the array with values 1 to 5.
- Print the array elements.
- Deallocate the memory using `delete`.

---

## 4. Unit Testing (6 marks)
Write a C++ program that demonstrates unit testing using assertions.

**Requirements:**
- Implement a function `add(int, int)` that returns the sum of two integers.
- Test the function using assertions in the `main()` function.
- Test for both positive and negative cases.

---

## 5. OOP Concepts (6 marks)
Design a `Vehicle` class with attributes `color`, `model`, and `year`. Implement methods to display vehicle details and calculate the vehicle's age.

**Requirements:**
- Implement a parameterized constructor `Vehicle(string, string, int)` to initialize the object.
- Implement methods `displayDetails()` and `calculateAge()`.
- Test the class in the `main()` function.

---

## Question 6: Polymorphism (Late Binding)
Design a `Shape` class with a pure virtual function `area()`. Implement two derived classes `Circle` and `Rectangle` that override the `area()` function.

**Requirements:**
- Implement a pure virtual function `area()` in the `Shape` class.
- Implement `Circle` and `Rectangle` classes that override the `area()` function.
- Test the classes using a `Shape` pointer in the `main()` function.

---

## Question 7: Polymorphism (Early Binding) - 6 marks

Design a `Calculator` class with overloaded functions `add()` that take different types of arguments.

**Requirements:**
- Implement overloaded functions `add(int, int)`, `add(double, double)`, and `add(int, double)`.
- Test the functions in the `main()` function.

---

## Question 8: Abstraction with Pure Functions (6 marks)

Design an `Animal` class with a pure virtual function `sound()`. Implement two derived classes `Dog` and `Cat` that override the `sound()` function.

**Requirements:**
- Implement a pure virtual function `sound()` in the `Animal` class.
- Implement `Dog` and `Cat` classes that override the `sound()` function.
- Test the classes using an `Animal` pointer in the `main()` function.

---

## Question 9: Inheritance (6 marks)

Design a `Vehicle` class with attributes `color` and `model`. Implement a derived class `Car` that inherits from `Vehicle` and adds an attribute `numDoors`.

**Requirements:**
- Implement a `Vehicle` class with attributes `color` and `model`.
- Implement a `Car` class that inherits from `Vehicle` and adds an attribute `numDoors`.
- Test the classes in the `main()` function.
