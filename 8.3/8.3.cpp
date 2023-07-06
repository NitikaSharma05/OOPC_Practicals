#include<iostream>
using namespace std;

class alpha
{

public:
    int x;

    alpha(int a)
    {
        x = a;
    }
    void putdata()
    {
        cin >> x;
        cout << "X=" << x << endl;
    }
};

class beta
{

public:
    float y;
    beta(float b)
    {
        y = b;
    }
    void ptdata()
    {
        cin >> y;
        cout << "Y=" << y << endl;
    }
};

class gamma :public alpha, public beta
{
    int m, n;
public:
    gamma(int a, int b) :alpha(x), beta(y)
    {
        m = a;
        n = b;
    }
    void pttdata()
    {
        cout << m << endl;
        cout << n;
    }
};

int main()
{
    gamma g(10, 20);
    g.putdata();
    g.ptdata();
    g.pttdata();
    cout << endl << endl << endl;

    cout << "~NITIKA SHARMA";
    cout << endl << "~22DCS109";
}