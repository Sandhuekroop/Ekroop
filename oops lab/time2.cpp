#include <iostream>
using namespace std;

class Time
{
public:
    int h1, s1, m1, h2, m2, s2, sect, mint, hr;

    void inputTime1()
    {
        cout << "Enter time 1 in hours, minutes, and seconds: ";
        cin >> h1 >> m1 >> s1;
        cout << "Time 1: " << h1 << " hrs " << m1 << " mins " << s1 << " secs" << endl;
    }

    void inputTime2()
    {
        cout << "Enter time 2 in hours, minutes, and seconds: ";
        cin >> h2 >> m2 >> s2;
        cout << "Time 2: " << h2 << " hrs " << m2 << " mins " << s2 << " secs" << endl;
    }

    void calculate()
    {
        sect = (s1 + s2) % 60;
        mint = (m1 + m2 + (s1 + s2) / 60) % 60;
        hr = h1 + h2 + (m1 + m2 + (s1 + s2) / 60) / 60;
    }

    void display()
    {
        cout << "After addition: " << endl;
        cout << hr << " hrs " << mint << " mins " << sect << " secs" << endl;
    }
};

int main()
{
    Time obj;
    obj.inputTime1();
    obj.inputTime2();
    obj.calculate();
    obj.display();

    return 0;
}
