#include <iostream>
using namespace std;
class p
{
public:
    p()
    {
        cout << "base class constructor";
    }
};
class d : public p
{
public:
    d()
    {
        cout << "derived class constructor";
    }
};
int main()
{
    d obj;
     return 0;
}