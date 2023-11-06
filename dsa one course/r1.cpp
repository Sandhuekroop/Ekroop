#include<iostream>
using namespace std;
int  recursion(int n,int m)
{
    if(n==1||m==1)
    return 1;
    else 
   return recursion(n-1,m)+recursion(n,m-1);
}
int main(){
int a,b;
cout<<"enter the no. of rows and columns"<<endl;
cin>>a>>b;
cout<<recursion(a,b);
return 0;
}