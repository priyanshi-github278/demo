#include <iostream>
#include <iomanip> // For std::setprecision
using namespace std;

const double PI = 3.14; // Define PI as a constant with 2 decimal places

int main() {
    double radius;

    // Take input for radius
    cin >> radius;    

    // Calculate the perimeter (circumference) of the circle
    double perimeter = 2 * PI * radius;

    // Display the perimeter with 2 decimal precision
    cout << fixed << setprecision(2) << perimeter << endl;

    return 0;
}