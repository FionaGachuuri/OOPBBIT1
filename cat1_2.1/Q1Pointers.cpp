#include <iostream>
using namespace std;

/**
* This program demonstrates the use of pointers in C++.
* It shows how to declare a pointer, assign it the address of a variable,
* and use it to access and modify the variable's value.
* parameter: int* a - pointer to the first integer
* parameter: int* b - pointer to the second integer
*/

void swap(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}