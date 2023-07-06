#include<iostream>
#include<string>
using namespace std;

class vegetable
{
    string color;
public:
    void getdata()
    {
        cout << "enter the color:";
        cin >> color;
    }
    void putdata()
    {
        cout << "DISPLAY OF THE DATA" << endl;
        cout << "the color is:" << color << endl;
    }
};
class tomato :public vegetable
{
    int weight, size1;
public:
    void gtdata()
    {
        vegetable::getdata();
        cout << "enter the size:";
        cin >> size1;
        cout << "enter the weight:";
        cin >> weight;
    }
    void ptdata()
    {
        vegetable::putdata();
        cout << "the size is:" << size1 << endl;
        cout << "the weight is:" << weight << "kg" << endl;
    }
};

int main()
{
    tomato t;
    t.gtdata();
    t.ptdata();

    cout << endl << endl << endl << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";
    return 0;
}