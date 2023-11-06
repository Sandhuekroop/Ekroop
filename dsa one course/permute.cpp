#include<iostream>
using namespace std;

void swap();
void permute(string s,int l ,int r)
{
    if(l==r)
    {
        cout<<s;
        return;
    }
    for(int i=l;i<=r;i++)
    s=swap(s,l,i);
    permute(s,l+1,r);
    s=swap(s,l,i);
}
int main(){

return 0;
}