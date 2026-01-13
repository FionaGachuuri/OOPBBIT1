#include <iostream>
using namespace std;

/**
* This program demonstrates dynamic memory management in C++.
* Allocate memory for an integer array of size 5 using `new`.
* Initialize the array with values 1 to 5.
* Print the array elements.
* Deallocate the memory using `delete[]`
*/

int main() {
    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the array elements
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;
    cout << "Memory deallocated successfully." << endl;
    arr = nullptr;

    return 0;
}