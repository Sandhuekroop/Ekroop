#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
//   Unsorted array for linear search
int main()
{
    // int element;
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    //  size = sizeof(arr) / sizeof(int);
     int element;
     cout<<"enter the element to be found";
     cin>>element;

    // int element = 23;

    int searchIndex = linearSearch(arr, size, element);
    cout<<"The element "<<element<<"found at index"<<searchIndex<<" \n" ;
    return 0;
}
