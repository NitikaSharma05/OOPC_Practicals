#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create the text file and write letters A to Z
    ofstream file("alphabet.txt");
    if (file.is_open()) {
        for (char letter = 'A'; letter <= 'Z'; ++letter) {
            file << letter;
        }
        file.close();
        cout << "File created successfully!" << endl;
    }
    else {
        cout << "Unable to create the file." << endl;
        return 1;
    }

    // Read the file in reverse order and print it on the screen
    ifstream inputFile("alphabet.txt");
    if (inputFile.is_open()) {
        string content;
        getline(inputFile, content);

        cout << "Content of the file in reverse order:" << endl;
        for (int i = content.size() - 1; i >= 0; --i) {
            cout << content[i];
        }
        cout << endl;

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
