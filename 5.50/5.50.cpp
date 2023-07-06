#include <iostream>
#include <string>
using namespace std;

class Gate {
private:
    string regNo;
    string name;
    string examCenter;
    static int ECV_Cnt;
    static int ECS_Cnt;
    static int ECA_Cnt;

public:
    void getdata() {
        cout << "Enter registration number: ";
        getline(cin, regNo);

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter exam center (Vadodara/Surat/Ahmedabad): ";
        getline(cin, examCenter);

        if (examCenter == "Vadodara") {
            ECV_Cnt++;
        }
        else if (examCenter == "Surat") {
            ECS_Cnt++;
        }
        else if (examCenter == "Ahmedabad") {
            ECA_Cnt++;
        }
        else {
            cout << "Invalid exam center entered!\n";
        }
    }

    void putdata() {
        cout << "Registration number: " << regNo << endl;
        cout << "Name: " << name << endl;
        cout << "Exam center: " << examCenter << endl;
    }

    static void getcount() {
        cout << endl;
        cout << "Total students in Vadodara: " << ECV_Cnt << endl;
        cout << "Total students in Surat: " << ECS_Cnt << endl;
        cout << "Total students in Ahmedabad: " << ECA_Cnt << endl;
    }
};

int Gate::ECV_Cnt = 0;
int Gate::ECS_Cnt = 0;
int Gate::ECA_Cnt = 0;

int main() {
    Gate students[5];

    for (int i = 0; i < 5; i++) {
        cout << "--Enter details of student" << i + 1 << ":--\n";
        students[i].getdata();
        cout << endl << endl;
    }

    cout << "--Details of all students:--\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].putdata();
        cout << endl;
    }

    Gate::getcount();
    cout << endl << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";

    return 0;
}
