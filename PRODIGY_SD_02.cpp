// Create a program that converts temperatures between Celsius, Fahrenheit, and Kelvin scales. The program should prompt the user to input a temperature value and the original unit of measurement. It should then convert the temperature to the other two units and display the converted values to the user. For example, if the user enters a temperature of 25 degrees Celsius, the program should convert it to Fahrenheit and Kelvin, and present the converted values as outputs.

// ---------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    // Get user input for temperature and unit
    double temperature;
    char unit;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter unit (C, F, or K): ";
    cin >> unit;

    // Perform temperature conversion
    double convertedTemperatureC, convertedTemperatureF, convertedTemperatureK;

    switch (unit) {
        case 'C':
        case 'c':
            convertedTemperatureC = temperature;
            convertedTemperatureF = (temperature * 9 / 5) + 32;
            convertedTemperatureK = temperature + 273.15;
            break;

        case 'F':
        case 'f':
            convertedTemperatureC = (temperature - 32) * 5 / 9;
            convertedTemperatureF = temperature;
            convertedTemperatureK = (temperature - 32) * 5 / 9 + 273.15;
            break;

        case 'K':
        case 'k':
            convertedTemperatureC = temperature - 273.15;
            convertedTemperatureF = (temperature - 273.15) * 9 / 5 + 32;
            convertedTemperatureK = temperature;
            break;

        default:
            cout << "Invalid unit entered. Please use C, F, or K.\n";
            return 1; // Exit with an error code
    }

    // Display converted temperatures
    cout << "Converted Temperatures:\n";
    cout << "Celsius: " << convertedTemperatureC << " °C\n";
    cout << "Fahrenheit: " << convertedTemperatureF << " °F\n";
    cout << "Kelvin: " << convertedTemperatureK << " K\n";

    return 0;
}
