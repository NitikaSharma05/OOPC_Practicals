#include<iostream>
#include<string>
using namespace std;

class medicine
{
public:
    string type_med;
    string company_name;
    string dom;

public:
    void getdata()
    {
        cout << "enter the medicine type:";
        cin >> type_med;
        cout << "ente the company name:";
        getline(cin>>ws, company_name);//ws helps in removing the whitespaces coz getline used after cin counts the new line which is stored in the buffer.
        cout << endl;
        cout << "enter the date of manufacturing:";
        cin >> dom;
    }
    void putdata()
    {
        cout << "the medicine type:" << type_med << endl;
        cout << "the company name is:" << company_name << endl;
        cout << "the manufactruing date is:" << dom << endl;
    }
};

class tablet :public medicine
{
    string tablet_name;
    int qnty;
    float price;

public:
    void gtdata()
    {
        cout << "enter the tablet name:";
        cin >> tablet_name;
        cout << "enter the quantity per pack:";
        cin >> qnty;
        cout << "enter the price of one tablet:";
        cin >> price;
    }
    void ptdata()
    {
        cout << endl << endl;
        cout << "the tablet name is:" << tablet_name << endl;
        cout << "the quantity per pack is:" << qnty << endl;
        cout << "price per tablet is:" << price << endl;
    }
};

class syrup :public medicine
{
    float qnty_bottle, dosageu;
public:
    void input()
    {
        cout << "enter the quantity per bottle:";
        cin >> qnty_bottle;
        cout << "enter the dosage per unit:";
        cin >> dosageu;
    }
    void output()
    {
        cout << "the quantity per bottle is:" << qnty_bottle << endl;
        cout << "the dosage per unit is:" << dosageu << endl;
    }
};

int main()
{
    medicine m;
    m.getdata();
    cout << endl << endl;
    if (m.type_med == "tablet") {

        tablet t;
        t.gtdata();
        t.ptdata();
        cout << endl << endl;
    }

    else {
        syrup s;
        s.input();
        s.output();
    }
    cout << endl << endl << "~NITIKA SHARMA" << endl;
    cout << "~22DCS109";
    return 0;
}