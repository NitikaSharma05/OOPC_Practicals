#include<iostream>
#include<iomanip>
using namespace std;

class currency
{
public:
	int rupee, paisa;
	
	void enter()
	{
		cout << "enter rupee:";
		cin >> rupee;
		cout << "enter paisa:";
		cin >> paisa;
	}
	currency sum(currency c2)
	{
		currency c3;
		c3.rupee = rupee + c2.rupee;
		c3.paisa = paisa + c2.paisa;
		return c3;
	}
	void add(currency c1, currency c2)
	{
		rupee = c1.rupee + c2.rupee;
		paisa = c1.paisa + c2.paisa;
	}
	void show()
	{
		for (int i = 0; i < 100; i++)
		{
			if (paisa >= 100)
			{
				paisa -= 100;
				rupee++;
			}
		}
		cout << "the amount is:" << rupee << "." << paisa << endl;
	}
}c1,c2,c3;

int main()
{
	c1.enter();
	c2.enter();
	currency c3;
	c3.add(c1, c2);
	c3.show();//while using c3.add(c1,c2) function
	c3.show();//while using c3=c1.sum(c2) function

	cout << endl << endl << endl << "~NITIKA SHARMA" << endl << "~22DCS109";
	return 0;
}