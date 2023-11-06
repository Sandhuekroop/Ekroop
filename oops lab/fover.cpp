#include<iostream>
using namespace std;
// Class over
// {
// int a,b,c;
// public:
 int sum(int x,int y,int z)
{
    int a,b,c;
    a=x;
    b=y;
    c=z;

    cout<<"sum of 3 numbers is"<<a+b+c;
    }
     int sum()
    {
        int a,b;
        cout<<"enter any 2 numbers";
        cin>>a>>b;
        cout<<"sum is:"<<a+b;
    }

// };
int main()
{
    // over obj;
    // obj.sum(1,2,3);
    // obj.sum();
    int x,y,z;
    cout<<"enter 3 numbers";
    cin>>x>>y>>z;
    sum(x,y,z);
    sum();
    return 0;
}