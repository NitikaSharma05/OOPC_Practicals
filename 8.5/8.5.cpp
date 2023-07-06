#include <iostream>
#include<string>
using namespace std;

class Shape {
protected:
    string shape_name;

public:
    void getShapeName() {
        cout << "Enter shape name: ";
        getline(cin, shape_name);
    }

    void printShapeName() {
        cout << "Shape Name: " << shape_name << endl;
    }
};

class Circle : public Shape {
protected:
    double radius;

public:
    void getRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    void printRadius() {
        cout << "Radius of the circle: " << radius << endl;
    }
};

class Area : public Circle {
protected:
    double area_of_circle;

public:
    void calculateArea() {
        area_of_circle = 3.14 * radius * radius;
    }

    void display() {
        cout << "Area of the circle: " << area_of_circle << endl;
    }
};

int main() {
    Area myCircle;

    cout << "Enter information for the circle:" << endl;
    myCircle.getShapeName();
    myCircle.getRadius();

    myCircle.calculateArea();

    cout << endl;
    cout << "Information about the circle:" << endl;
    myCircle.printShapeName();
    myCircle.printRadius();
    myCircle.display();


    cout << endl << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";
    return 0;
}
