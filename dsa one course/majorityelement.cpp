#include<iostream>
using namespace std;

int majorityelement(int a[],int n )
{
    int ansIndex=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[ansIndex])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            ansIndex=i;
            count=1;
        }
    }
    if(ansIndex>n/2)
    {
        cout<<"majority element"<<endl ;
    }
}
int main(){
    int arr[]={1,1,2,3,1};
    // int N=arr[].length();
    int N= sizeof(arr)/sizeof(arr[0]);
    cout<<N;
    majorityelement(arr,N);
    

return 0;
}