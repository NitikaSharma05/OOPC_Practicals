#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    // Default Constructor
    Time() {
        hr = 0;
        min = 0;
        sec = 0;
    }

    // Parameterized Constructor
    Time(int h, int m, int s=52) {
        hr = h;
        min = m;
        sec = s;
    }

    // Copy Constructor
    Time(const Time& t) {
        hr = t.hr;
        min = t.min;
        sec = t.sec;
    }

    // Destructor
    ~Time() {
        cout << "Time object destroyed." << endl;
    }


    // Get data function
    void getData() {
        cout << "Enter hours: ";
        cin >> hr;
        cout << "Enter minutes: ";
        cin >> min;
        cout << "Enter seconds: ";
        cin >> sec;
    }

    // Put data function
    void putData() {
        cout << "Time: " << hr << ":" << min << ":" << sec << endl;
    }
};

int main() {
    // Create objects
    Time t1, t2(10, 45), t3(t2);

    // Call member functions
    t1.getData();
    cout << "USING DEFAULT CONSTRUCTOR" << endl;
    t1.putData();
    cout << "USING PARAMETARIZED CONSTRUCTOR" << endl;
    t2.putData();
    cout << "USING COPY CONSTRUCTOR" << endl;
    t3.putData();

    cout << endl << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109"<<endl;
    return 0;
}
