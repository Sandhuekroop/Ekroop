
#include <iostream>
using namespace std;
int main()
{
    int size, arr[20], min;
    cout << "enter the size of the array";
    cin >> size;
    cout << "enter the elements of the array:";
    for (int i = 0; i <size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < size ; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
            if(min!=i)
            {
                int temp= arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
            }
    cout<<"after sorting:";
    for(int i=0;i<size;i++)
    {
        cout<<"\t"<<arr[i];
    }
        return 0;
    }
