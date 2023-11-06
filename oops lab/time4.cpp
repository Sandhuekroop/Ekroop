#include <iostream>
using namespace std;

class Time
{
public:
    int h1, s1, m1, h2, m2, s2, sect, mint, hr;

    void t1()
    {
        cout << "Enter the time1 in hours minutes and seconds" << endl;
        cin >> h1 >> m1 >> s1;
        cout << "Time 1: " << h1 << " hrs " << m1 << " mins " << s1 << " secs" << endl;
    }

    void t2()
    {
        cout << "Enter the time2 in hours minutes and seconds" << endl;
        cin >> h2 >> m2 >> s2;
        cout << "Time 2: " << h2 << " hrs " << m2 << " mins " << s2 << " secs" << endl;
    }

    void addTimes()
    {
        sect = s1 + s2;
        mint = m1 + m2;
        hr = h1 + h2;

        if (sect >= 60)
        {
            mint++;
            sect -= 60;
        }

        if (mint >= 60)
        {
            hr++;
            mint -= 60;
        }

        if (hr > 12)
        {
            hr -= 12;
        }
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
    obj.t1();
    obj.t2();
    obj.addTimes();
    obj.display();

    return 0;
}
