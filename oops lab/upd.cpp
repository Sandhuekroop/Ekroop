#include<iostream>
using namespace std;

int upd(int *x){
*x=20;
cout<<*(x)<<endl;
}

int  main()
{
    int x=10;
    cout<<x<<endl;
    upd(&x);
    cout<<x<<endl;
    return 0;
}