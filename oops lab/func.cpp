#include<iostream>
using namespace std;

int swap( int a,int b)
{
    cout<<"before swapping x is"<<a<<"\t"<< " and y  is"<<b<<endl;

a=a+b; //30
b=a-b;//10
a=a-b;//
// cout<<a<<endl;
// cout<<b;
    cout<<"After swapping x is"<<a<<"\t"<< " and y  is"<<b<<endl;


}


int main()
{
    int x,y;
    cout<<"enter x and y";
    cin>>x>>y;
    cout<<"x:"<<x<<"\t y:" <<y<<endl;
      swap(x,y);
    // cout<<"After swapping x is"<<x<<"\t"<< " and y  is"<<y<<endl;
    return 0;
}