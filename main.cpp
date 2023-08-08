#include <iostream>

using namespace std;

int main() {
    cout << "Enter temperature (F): " << endl;
    double temp_f;
    cin >> temp_f;
    cout << "Celsius (approx.): " << (temp_f - 32) * 5 / 9;
}
