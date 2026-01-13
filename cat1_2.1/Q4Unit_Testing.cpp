#include <iostream>
#include <cassert>
using namespace std;

/**
* This program demonstrates unit testing in C++ using assertions.
* It defines a simple function to add two integers and uses assertions
* to verify that the function works correctly.
*/

int add(int a, int b) {
    return a + b;
}

int main() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    assert(add(-5, -3) == -8);
    assert(add(100, 200) == 300);

    cout << "All test cases passed!" << endl;

    return 0;
}
