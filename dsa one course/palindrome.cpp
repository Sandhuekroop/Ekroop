#include<iostream>
using namespace std;

bool isPalin(string s, int l,int r)
{
    if(l>=r)
    return true;
    if(s[l]!=s[r])
    return false;
    else
    return isPalin(s,l+1,r-1);
}
int main(){
string st;
int a=0;

cout<<"type the string :"<<endl;
cin>>st;

int b=st.length()-1;
cout<<isPalin(st,a,b);
return 0;
}