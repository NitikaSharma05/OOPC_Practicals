#include <iostream>
#include <string>

using namespace std;

class Gate {
private:
    int reg_no;
    string name;
    string exam_center;
    static int ECV_Cnt;
    static int ECS_Cnt;
    static int ECA_Cnt;

public:
    void getdata() {
        cout << "Enter registration number: ";
        cin >> reg_no;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter exam center (Vadodara/Surat/Ahmedabad): ";
        cin >> exam_center;

        if (exam_center == "Vadodara") {
            ECV_Cnt++;
        }
        else if (exam_center == "Surat") {
            ECS_Cnt++;
        }
        else if (exam_center == "Ahmedabad") {
            ECA_Cnt++;
        }
    }

    void putdata() {
        cout << "Registration number: " << reg_no << endl;
        cout << "Name: " << name << endl;
        cout << "Exam center: " << exam_center << endl;
    }

    static void getcount() {
        cout << "Number of students in Vadodara: " << ECV_Cnt << endl;
        cout << "Number of students in Surat: " << ECS_Cnt << endl;
        cout << "Number of students in Ahmedabad: " << ECA_Cnt << endl;
    }
};

int Gate::ECV_Cnt = 0;
int Gate::ECS_Cnt = 0;
int Gate::ECA_Cnt = 0;

int main() {
    Gate students[5];


    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getdata();
    }


    for (int i = 0; i < 5; i++) {
        cout << "Details for student " << i + 1 << ":" << endl;
        students[i].putdata();
        cout << endl;
    }


    Gate::getcount();

    cout << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";

    return 0;
}
