
#include<iostream>
using namespace std;

void merge(int arr[], int left[], int left_count, int right[], int right_count) {
    int i = 0, j = 0, k = 0;

    while (i < left_count && j < right_count) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < left_count) {
        arr[k++] = left[i++];
    }

    while (j < right_count) {
        arr[k++] = right[j++];
    }
}

void merge_sort(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int mid = n / 2;
    int left[mid];
    int right[n - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    merge_sort(left, mid);
    merge_sort(right, n - mid);
    merge(arr, left, mid, right, n - mid);
}

int main() {
    int arr[] = {7, 5, 1, 8, 3, 6, 0, 9, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}