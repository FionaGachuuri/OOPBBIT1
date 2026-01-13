#include <iostream>
using namespace std;

/**
* This program implements a parameterized constructor `Vehicle(string, string, int)` to initialize the object.
* It implements methods `displayDetails()` and `calculateAge()`.
* It creates multiple instances of the `Vehicle` class with different attributes and displays their details and age.
*/

class Vehicle {
    private:
        string color;
        string model;
        int year;

    public:
        Vehicle(string c, string m, int y) {
            this->color = c;
            this->model = m;
            this->year = y;
        }

        void displayDetails() {
            cout << "Color: " << color << ", Model: " << model << ", Year: " << year << endl;
        }

        int calculateAge(int currentYear) {
            return currentYear - year;
        }
};

int main() {
    Vehicle vehicle1("Red", "Camry", 2015);
    Vehicle vehicle2("Blue", "Civic", 2018);
    Vehicle vehicle3("Black", "Mustang", 2020);

    int currentYear = 2024;

    cout << "Vehicle 1 Details:" << endl;
    vehicle1.displayDetails();
    cout << "Age: " << vehicle1.calculateAge(currentYear) << " years" << endl;

    cout << "\nVehicle 2 Details:" << endl;
    vehicle2.displayDetails();
    cout << "Age: " << vehicle2.calculateAge(currentYear) << " years" << endl;

    cout << "\nVehicle 3 Details:" << endl;
    vehicle3.displayDetails();
    cout << "Age: " << vehicle3.calculateAge(currentYear) << " years" << endl;

    return 0;
}