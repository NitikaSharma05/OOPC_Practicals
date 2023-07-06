#include<iostream>
using namespace std;

class celsius {
public:
	float c;
	void display() {
		cout << "C:" << c;
	}
	void operator =(float a) {
		c = a;
	}
};
class fahrenheit {
public:
	float f;
	void display() {
		cout << "F:" << f;
	}
	void operator=(celsius t1) {
		f = (t1.c * 9 / 5) + 32;
	}
};

int main() {
	celsius c1, c2;
	c1.c = 20.0;
	c2 = 10.0;
	fahrenheit f1, f2;
	f1 = c2;
	f2 = c1;
	f1.display();
	cout << endl;
	f2.display();
	cout << endl;
	cout << endl << endl << "~NITIKA SHARMA";
	cout << endl << "~22DCS109";
	return 0;
}	