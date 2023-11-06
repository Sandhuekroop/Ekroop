#include<iostream>
using namespace std;

int main()
{
int n,i=1;
long long int f=1;
cout<<"enter the number whose factorial that you want to find"<<endl;
cin>>n;
while(i<=n)
{
    f=f*i;
    i++;
}
cout<<"the value of factorial of"<<n<<"is:"<<f;
return 0;
}