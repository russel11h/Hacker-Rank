#include <iostream>
using namespace std;

void merge(int *arr, int low, int high, int mid) {
    int i = low, j = mid + 1, k = 0, c[high - low + 1];
    while (i <= mid && j <= high)
        if (arr[i] < arr[j])
            c[k++] = arr[i++];
        else
            c[k++] = arr[j++];
    while (i <= mid)
        c[k++] = arr[i++];
    while (j <= high)
        c[k++] = arr[j++];
    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = c[k];
}

void merge_sort(int *arr, int low, int high) {
    int mid = (low + high) / 2;
    if (low < high) {
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}

int main() {
    int n=5;
    /*
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
       */
    int arr[5]={1,4,3,6,2};

    merge_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

