#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Welcome to TempConversion!" << endl;
    cout << "Convert from Celsius or Fahrenheit? ";
    cin >> input;

    if (input == "Celsius") {
        cout << "Enter temperature (°C): " << endl;
        double temp_c;
        cin >> temp_c;
        double temp_f = (temp_c * 9 / 5) + 32;
        cout << fixed << setprecision(2);
        cout << "Fahrenheit (approx.): " << temp_f << endl;

    } else if (input == "Fahrenheit") {
        cout << "Enter temperature (°F): " << endl;
        double temp_f;
        cin >> temp_f;
        double temp_c = (temp_f - 32) * 5 / 9;
        cout << fixed << setprecision(2);
        cout << "Celsius (approx.): " << temp_c << endl;

        // Extras for Fahrenheit
        if (temp_f > 80) {
            cout << "Make sure to drink adequate amounts of water and dress comfortably.";
        } else if (temp_f < 65) {
            cout << " Today will be cold so keep yourself warm.";
        }

        // Extras for Celsius
        if (temp_c > 27) {
            cout << "Make sure to drink adequate amounts of water and dress comfortably.";
        } else if (temp_c < 18) {
            cout << " Today will be cold so keep yourself warm.";
        }
    }
    return 0;
}
