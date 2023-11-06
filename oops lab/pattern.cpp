#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"enter n";
cin>>n;
 int i=0;
 while(i<n){

    //print numbers
    int num=1;
while(num<=n-i){
    cout<<num;
    num++;
}
// print star1
int star1=1;
while(star1<=i)
{
    cout<<"*";
    star1++;
}
int star2=1;
while(star2<=i)
{
    cout<<"*";
    star2++;
}



    int num2=1;
    int pt=1;
while(num2<=n-i){
    cout<<n-i-pt+1;
    pt++;
    num2++;
}


    cout<<endl;
    i++;
 }
return 0;
}