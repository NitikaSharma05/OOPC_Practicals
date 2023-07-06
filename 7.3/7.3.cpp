#include<iostream>
#include<string>
using namespace std;

class stringg {
public:
	string str;
	void input() {
		cout << "enter string :";
		getline(cin, str);
	}
	stringg operator+(const stringg& s2) {
		stringg s3;
		s3.str = str + s2.str;
		return s3;
	}
	stringg operator ==(const stringg& s2) {
		stringg s3;
		if (str < s2.str) {
			s3.str = str;
		}
		else {
			s3.str = s2.str;
		}
		return s3;
	}
	void operator +=(const stringg& s2) {
		str += s2.str;
	}
	void output() {
		cout << str;
	}
};
int main() {
	stringg s1, s2, s3, s4;
	s1.input();
	s2.input();
	cout << endl;
	s1 += s2;
	cout << endl;
	s1.output();

	cout << endl << endl << endl << "~NITIKA SHARMA";
	cout << endl << "~22DCS109";
	return 0;
}