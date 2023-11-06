#include <iostream>
using namespace std;
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
        // if (sect > 60)
        // {
        //     sect -= 60;
        //     return sect;
        // }
        // else
        // {
        //     // sect-=60;
            return sect;
        // }
    }
    int minutes()
    {
        mint = m1 + m2;
        // if (mint > 60)
        // {
        //     // mint = 60 - (120 - (m1 + m2));
        //     mint -= 60;

        //     if (sect > 60)
        //     {
        //         mint++;
        //     }
        //     return mint;
        // }
        // else
        // {
        //     return mint;
        // }
        if(sect>60)
        {
            return sect-=60;
            mint++;

        }
        return mint;
    
    }
    int hours()
    {
        hr = h1 + h2;
        // if (hr > 12)
        // {
        //     hr -= 12;
            if (mint > 60)
            {   
                mint-=60;
                hr++;
            }
            return hr;
        // }
        // else
        // {
        //     if (mint > 60)
        //     {
        //         hr++;
        //     }

        //     return hr;
        // }
    }
    int display()
    {
        cout << "after addition: " << endl;
        cout << hr << mint << sect << endl;
        // if (sect > 60)
        // {
        //     // sect = 60 - (120 - (s1 + s2));
        //     sect = -60;
        //     return mint++;
        // }
        // else
        // {
        //     return mint;
        // }
        // // if (mint > 60)
        // // {
        // //     // mint = 60 - (120 - (m1 + m2));
        // //     mint = -60;
        // //     return hr++;
        // // }
        // // else
        // // {
        // //     return mint;
        // // }
        // if (hr > 12)
        // {
        //     // hr = 12 - (24 - (h1 + h2));
        //     hr = -12;
        //     return hr;
        // }
        // else
        // {
        //     return hr;
        // }
    }
    void show()
    {

        cout << hr << "hrs" << mint << "mins" << sect << "secs";
    }
};
int main()
{
    time obj;
    obj.t1();
    obj.t2();
    // calc obj1;
    obj.seconds();
    obj.minutes();
    obj.hours();
    obj.display();
    obj.show();
    return 0;
}