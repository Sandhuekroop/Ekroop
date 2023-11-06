
#include <iostream>
using namespace std;
class time
{
public:
    int h1, s1, m1, h2, m2, s2, sect, mint, hr;
    int t1()
    {
        cout << " time1    :";
        cin >> h1 >> m1 >> s1;
        cout << "time 1:" << h1 << "hrs" << m1 << "mins" << s1 << "secs"<<endl;
    }
    int t2()
    {
        cout << " time2:" ;
        cin >> h2 >> m2 >> s2;
        cout << "time 2:" << h2 << "hrs" << m2 << "mins" << s2 << "secs"<<endl;
    }

public:
    int seconds()
    {

        sect = s1 + s2;
         return sect;
         }
    int minutes()
    {
        mint = m1 + m2;
         if(sect>60)
        {
             sect-=60;
            mint++;

        }
        return mint;
    
    }
    int hours()
    {
        hr = h1 + h2;
        if(hr>12)
        {
            hr-=12;
        }
           if (mint > 60)
            {   
                mint-=60;
                hr++;
            }
            return hr;
             }
    int display()
    {
        cout << "after addition: " ;
        cout << hr <<"\t"<< mint <<"\t"<< sect << endl;
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