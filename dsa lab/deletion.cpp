#include<iostream>
using namespace std;
void display(int arr[],int n){
    //code for traversal
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
        
    }
cout<<endl;
}
void indDeletion(int arr[],int size,int index)
{
    //codefordeletion
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5,element=45,index=2;
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}