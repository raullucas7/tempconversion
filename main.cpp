#include <iostream>

using namespace std;

int main() {
    string input;
    cout << "Convert from Celsius or Fahrenheit? ";
    cin >> input;

    if (input == "Celsius") {
        cout << "Enter temperature (C): " << endl;
        double temp_c;
        cin >> temp_c;
        double temp_f = (temp_c * 9 / 5) + 32;
        cout << "Fahrenheit (approx.): " << temp_f;

    } else if (input == "Fahrenheit"){
        cout << "Enter temperature (F): " << endl;
        double temp_f;
        cin >> temp_f;
        double temp_c = (temp_f - 32) * 5 / 9;
        cout << "Celsius (approx.): " << temp_c;
    }
    return 0;
}
