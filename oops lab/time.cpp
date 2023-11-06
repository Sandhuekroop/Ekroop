#include <iostream>
using namespace std;
// 1 hr 55mins 50 secs
// 2hr 35 min 25 secs
// 4 hours 31 mins 15secs  120-91=29
class time
{
public:
    int h1, s1, m1, h2, m2, s2, sect, mint, hr;
    int t1()
    {
        cout << "enter the time1 in hours minutes and seconds" << endl;
        cin >> h1 >> m1 >> s1;
        cout << "time 1:" << h1 << "hrs" << m1 << "mins" << s1 << "secs";
    }
    int t2()
    {
        cout << "enter the time2 in hours minutes and seconds" << endl;
        cin >> h2 >> m2 >> s2;
        cout << "time 2:" << h2 << "hrs" << m2 << "mins" << s2 << "secs";
    }

public:
    int seconds()
    {

        sect = s1 + s2;
        if (sect > 60)
        {

            return 60 - (120 - (s1 + s2));
        }

        return sect;
    }

    int minutes()
    {
        int mint = m1 + m2;
        if (mint > 60)
        {
            mint = 60 - (120 - (m1 + m2));
            if (s1+s2 > 60)
            {
                mint++;
            }
        }
        else
        {
            if ((s1+s2) > 60)
            {
                mint++;
            }
        }
        return mint;
    }

    int hours()
    {
        int hr = h1 + h2;
        if (hr > 12)
        {
            hr = 12 - (24 - (h1 + h2));
            if (m1+m2 > 60)
            {
                hr++;
            }
        }
        else
        {
            if ((m1+m2) > 60)
            {
                hr++;
            }
        }
        return hr;
    }
    void display()
    {

        cout << "after addition: " << endl;
        cout << hr << "hrs" << mint << "mins" << sect << "secs";
    }
};
int main()
{
    time obj;
    obj.t1();
    obj.t2();
    obj.seconds();
    obj.minutes();
    obj.hours();
    obj.display();
    return 0;
}