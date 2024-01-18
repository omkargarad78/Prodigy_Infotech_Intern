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
