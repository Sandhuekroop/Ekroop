#include<iostream>
using namespace std;
int main(){
int n=234;
int product=1;
int sum=0;
for(int i=0;n!=0;i++)
{
    int  digit=n%10;
     n =n/10;
    product=product*digit;
    sum=sum+digit;
}
    // cout<<sum<<endl;
    // cout<<product<<endl;
cout<<product-sum;
return 0;
}