#include<iostream>
using namespace std;
class over
{
int a,b,c,d;
char w;
public:
 int sum(int x ,int y,int z)
{
    // int a,b,c;
    a=x;
    b=y;
    c=z;

    cout<<"sum of 3 numbers is"<<a+b+c<<endl;
    }
     int sum()
    {
        // int a,b;
        cout<<"enter any 2 numbers";
        cin>>a>>b;
        cout<<"sum of 2 numbers  is:"<<a+b<<endl;
    }
    int sum(char r,int e)
    {
        w=r;
        d=e;
        cout<<"sum:"<< w+e;
    }

};
int main()
{
    over obj;
    obj.sum(1,2,3);
    obj.sum();
    obj.sum('A',4);
    // int x,y,z;
    // cout<<"enter 3 numbers";
    // cin>>x>>y>>z;
    // sum( x,  y, z);
    // sum();
    return 0;
}