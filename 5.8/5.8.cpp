#include <iostream>
#include <string>

using namespace std;

class Child {
private:
    string name;
    char gender;
public:
    void GetData() {
        cout << "Enter the name of the child: ";
        getline(cin, name);
        cout << "Enter the gender of the child (M/F): ";
        cin >> gender;
    }
    void PrintData() {
        cout << "Child's name: " << name << endl;
        cout << "Child's gender: " << gender << endl;
    }
    friend class Parent;
};

class Parent {
public:
    void ReadChildData(Child& child) {
        cout << "--READING CHILD DATA--" << endl;
        child.GetData();
    }
    void DisplayChildData(Child child) {
        cout << "--DISPLAYING CHILD DATA--" << endl;
        child.PrintData();
    }
};

int main() {
    Child child;
    Parent parent;
    parent.ReadChildData(child);
    parent.DisplayChildData(child);

    cout << endl << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";
    return 0;
}
