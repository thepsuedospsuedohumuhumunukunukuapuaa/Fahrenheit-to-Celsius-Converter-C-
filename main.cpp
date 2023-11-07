#include <iostream>

using namespace std;

int main() {
    // Provide instructions to the user
    cout << "Fahrenheit to Celsius Conversion" << endl;
    cout << "Enter a temperature in Fahrenheit: ";

    double fahrenheit;
    cin >> fahrenheit;

    // Calculate the temperature in Celsius using the correct formula
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the result
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;

    return 0;
}
