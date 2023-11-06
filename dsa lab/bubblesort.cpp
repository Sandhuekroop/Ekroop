#include <iostream>
using namespace std;

int display(int arr[], int i, int n)
{
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n, i;
    int arr[10];
    cout << "enter the no. of elements ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, i, n);
    return 0;
}