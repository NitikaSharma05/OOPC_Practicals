#include<iostream>
using namespace std;

class celsius {
public:
	float c;
	void display() {
		cout << "enter the celsius:";
		cin >> c;
	}
	void operator=(float a) {
		c = a;
	}
	operator float() {
		return c;
	}
};
int main() {
	celsius c1;
	float temp,t;
	cin >> t;
	c1 = t;
	temp = c1;
	cout << temp;
	cout << endl << endl << endl << "~NITIKA SHARMA";
	cout << endl << "~22DCS109";
	return 0;
}