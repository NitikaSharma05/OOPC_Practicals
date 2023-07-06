#include<iostream>
using namespace std;

class number {
	int num;
public:
	number()//default constructor
	{
		num = 0;
	}
	number(int n) {//parameterized constructor
		num = n;
	}
	number(const number& n) {//copy constructor
		num = n.num;
	}

	void input() {
		cout << "enter the number:";
		cin >> num;
	}
	void output() {
		cout << "the number is:" << num;
		cout << endl;
	}
	//operator overloading
	number operator ++() {
		return num++;
	}
	number operator ++(int) {
		return ++num;
	}
	number operator -() {
		return -num;
	}
};

int main() {
	number n1, n2, n3;

	n2.input();
	n3 = n2++;
	n3.output();

	cout << endl;

	n1.input();
	n3 = ++n1;
	n3.output();

	cout << endl;

	n3.input();
	n3 = -n3;
	n3.output();

	cout << endl << endl << endl << "~NITIKA SHARMA";
	cout << endl << "~22DCS109";

	return 0;
}