#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    // Sorting the array using bubble sort
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements             arr[j]     temp   arr[j+1]
                int temp = arr[j];                       
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    int index = binarySearch(arr, size, element);
    if (index != -1)
    {
        cout << "Element found at index " << index << "\n";
    }
    else
    {
        cout << "Element not found in the array.\n";
    }

    return 0;
}
