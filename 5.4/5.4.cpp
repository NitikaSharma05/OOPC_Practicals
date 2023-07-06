#include<iostream>
using namespace std;

class dist
{
public:
	int feet;
	float inch;
	float sf;;

	void data()
	{
		cout << "enter the feet:";
		cin >> feet;
		cout << "enter the inches:";
		cin >> inch;
	}
	void display()
	{
		cout << endl << "the length is:" << feet << "-" << inch << endl;
	}
	void scale(dist& d1, float sf)
	{
		d1.feet *= sf;
		d1.inch *= sf;
		if (d1.feet % 2 != 0)
			d1.inch += 6;
	}
};

int main()
{
	float sf;
	dist d1;
	d1.data();
	cout << "BEFORE SCALING";
	d1.display();
	
	cout << endl << "enter the scale:";
	cin >> sf;

	cout << "AFTER SCALING";
	d1.scale(d1, sf);
	d1.display();

	cout << endl << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";
	return 0;
}