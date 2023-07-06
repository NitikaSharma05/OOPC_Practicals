#include<iostream>
using namespace std;

class complex {
	int real, img;
public:
	void getdata() {
		cout << "enter the real part:";
		cin >> real;
		cout << "enter the imaginary part:";
		cin >> img;
	}

	friend complex operator -(complex &c) {
		c.img = -c.img;
		return c;
	}
	void putdata() {
		cout << endl;
		cout << "the complex number is:" << real << "" << img << "i" << endl;
	}
};

int main() {
	complex c1, c;
	c1.getdata();
	c = -c1;
	c.putdata();

	cout << endl << endl << "~NITIKA SHARMA" << endl;
	cout << "~22DCS109";
}