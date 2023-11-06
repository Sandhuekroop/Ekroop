#include <stdio.h>
#include <conio.h>

int binary_search(int arr, int target)
{
    int low, mid, high;
    low = 0;
    high = len(arr) - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
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
// # Example usage:
int main()
{
    int target, result;
    int arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
     
     for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
    
    target = 23;

    result = binary_search(arr, target);
    if (result != -1)
    {
        print("Element found at index", result);
    }
    else
    {
        print("Element not found");
        return 0;
    }
}