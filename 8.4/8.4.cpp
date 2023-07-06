#include <iostream>
#include<string>
using namespace std;

class Hospital {
protected:
    int rollNo;
    string name;

public:
    void getData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
    }

    void printData() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }
};

class Ward : public Hospital {
protected:
    int wardNo;

public:
    void getData() {
        Hospital::getData();
        cout << "Enter ward number: ";
        cin >> wardNo;
    }

    void printData() {
        Hospital::printData();
        cout << "Ward Number: " << wardNo << endl;
        cout << endl;
    }
};

class Room : public Hospital {
protected:
    int bedNo;
    string natureOfIllness;

public:
    void getData() {
        Hospital::getData();
        cout << "Enter bed number: ";
        cin >> bedNo;
        cout << "Enter nature of illness: ";
        cin.ignore();
        getline(cin, natureOfIllness);
    }

    void printData() {
        Hospital::printData();
        cout << "Bed Number: " << bedNo << endl;
        cout << "Nature of Illness: " << natureOfIllness << endl;
    }
};

class Patient : public Ward, public Room {
public:
    void getData() {
        Ward::getData();
        Room::getData();
    }

    void printData() {
        Ward::printData();
        Room::printData();
    }
};

int main() {
    Patient patients[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for patient " << i + 1 << ":" << endl;
        cout << endl;
        patients[i].getData();
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Details of patient " << i + 1 << ":" << endl;
        patients[i].printData();
        cout << endl;
    }
    cout << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";
    return 0;
}
