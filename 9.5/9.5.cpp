#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    float average;

public:
    virtual void getData() = 0;
    virtual void putData() = 0;
};

class Car : public Vehicle {
private:
    string fuelType;

public:
    void getData() override {
        cout << "Enter Car Details:" << endl;
        cout << "Fuel Type: ";
        cin >> fuelType;
        cout << "Average: ";
        cin >> average;
    }

    void putData() override {
        cout << "Car Details:" << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Average: " << average << " km/l" << endl;
    }
};

class Truck : public Vehicle {
private:
    int numWheels;

public:
    void getData() override {
        cout << "Enter Truck Details:" << endl;
        cout << "Number of Wheels: ";
        cin >> numWheels;
        cout << "Average: ";
        cin >> average;
    }

    void putData() override {
        cout << "Truck Details:" << endl;
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Average: " << average << " km/l" << endl;
    }
};

int main() {
    Car car1, car2;
    Truck truck;

    cout << "Enter details of Car 1:" << endl;
    car1.getData();

    cout << endl << "Enter details of Car 2:" << endl;
    car2.getData();

    cout << endl << "Enter details of Truck:" << endl;
    truck.getData();

    cout << endl << "Car 1 Details:" << endl;
    car1.putData();

    cout << endl << "Car 2 Details:" << endl;
    car2.putData();

    cout << endl << "Truck Details:" << endl;
    truck.putData();
    cout << endl << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";

    return 0;
}
