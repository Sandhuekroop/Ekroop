#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArray(std::vector<int>& nums);
};
int main()
{

    int n; int arr[10];
    cin>>n;
      for(int i=0;i<n;i++)
      {
    cin>>arr[n];
      }
 
    for(int i=0;i<n;i++)
    {
        //    cin>>arr[n];
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j])
            {
             swapped=true;
             int temp= arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
            if(!swapped)
            {
                break;
            }
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[n];

    }
  return 0;
}