#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomplexcomplex(complex, complex);
};
class complex
{
    int a, b;
    // friend int calculator::sumrealcomplex(complex,complex);
    friend class calculator;

public:
calculator()
{
    a=0;
    b=0;
}
    calculator(int n1, int n2)
    {
        a = n1;
        b = n
        
    }
    void printnumber()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcomplexcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2(5,7);

    // o1.printnumber();
    // o2.printnumber();
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is:" << res << endl;
    int resc = calc.sumcomplexcomplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is:" << resc << endl;
    cout << "the sum of givem two complex number is:" << res << "+" << resc << "i";
    return 0;
}