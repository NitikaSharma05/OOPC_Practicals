#include<iostream>
using namespace std;

class date
{
    int dd, mm, yyyy;
public:
    void getdata()
    {
        cout << endl<<endl;
        cout << "enter the date:";
        cin >> dd;
        cout << "enter month:";
        cin >> mm;
        cout << "enter year:";
        cin >> yyyy;
    }
    void putdata()
    {
        /*cout << "Date:" << dd << endl;
        cout << "Month:" << mm << endl;
        cout << "Year:" << yyyy << endl;*/
        cout << "the date is:";
        cout << dd << "/" << mm << "/" << yyyy;
    }
    friend date swapdates(date& d1, date& d2)
    {
        date t;
        t = d1;
        d1 = d2;
        d2 = t;
        //cout<<d1;
        //cout<<d2;
        return d1;
    }
};

int main()
{
    date d1, d2;
    cout << "--BEFORE SWAPPING--" << endl;
    d1.getdata();
    d1.putdata();

    d2.getdata();
    d2.putdata();

    swapdates(d1, d2);

    cout << endl;
    cout <<endl<<"--AFTER SWAPPING--"<<endl;
    cout << endl;
    d1.putdata();
    cout << endl;
    d2.putdata();

    cout << endl << endl << "~NITIKA SHARMA" << endl<<"~22DCS109";

}