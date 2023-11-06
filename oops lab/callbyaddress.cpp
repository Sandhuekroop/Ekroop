#include<iostream>
using namespace std;

int swap( int &a,int& b)
{
    // cout<<"before swapping a is"<<a<<endl<< " and b  is"<<b<<endl;

a=a+b; //30
b=a-b;//10
a=a-b;//
// cout<<a<<endl;
// cout<<b;

    cout<<"after swap x:"<<a<< " \t y:"<<b<<endl;

}


int main()
{
    int x,y;
    cout<<"enter x and y";
    cin>> x>> y;
    // cout<<flush;
    cout<<"before swap "<<" x:"<<x<<"\t y:" <<y<< endl;
      swap(x,y);
    return 0;
}