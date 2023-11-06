#include<iostream>
using namespace std;
int powerset(string s,int i,string cur)
{
    if(i==s.length())
{
    cout<<cur;
    return ;
}
powerset(s,i+1,cur+s[i]);
powerset(s,i+1,cur);

}
int main(){

return 0;
}