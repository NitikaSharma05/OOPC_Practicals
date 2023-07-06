#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator to display a number with a specific number of decimal places
ostream& setDecimalPlaces(ostream& os, int places) {
    os << fixed << setprecision(places);
    return os;
}

int main() {
    double number = 3.14159;

    cout << "Default output: " << number << endl;

    cout << "Output with 2 decimal places: ";
    cout << setDecimalPlaces << 2 << number << endl;

    cout << "Output with 4 decimal places: ";
    cout << setDecimalPlaces << 4 << number << endl;

    cout << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";

    return 0;
}
