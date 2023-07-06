#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Create the binary file and input height for five students
    ofstream file("student_heights.bin", ios::binary);
    if (file.is_open()) {
        for (int i = 0; i < 5; ++i) {
            float height;
            cout << "Enter the height for student " << (i + 1) << ": ";
            cin >> height;
            file.write(reinterpret_cast<const char*>(&height), sizeof(height));
        }
        file.close();
        cout << "File created successfully!" << endl;
    }
    else {
        cout << "Unable to create the file." << endl;
        return 1;
    }

    // Read the file and display the content with two decimal places precision
    ifstream inputFile("student_heights.bin", ios::binary);
    if (inputFile.is_open()) {
        cout << "Content of the file with two decimal places precision:" << endl;
        cout << fixed << setprecision(2);
        while (!inputFile.eof()) {
            float height;
            inputFile.read(reinterpret_cast<char*>(&height), sizeof(height));
            if (inputFile.eof()) {
                break;
            }
            cout << height << endl;
        }
        inputFile.close();
    }
    else {
        cout << "Unable to open the file." << endl;
        return 1;
    }

    cout << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";

    return 0;
}
