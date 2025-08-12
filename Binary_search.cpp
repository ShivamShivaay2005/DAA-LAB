#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key) {
    int low=0, high=size - 1;
    while (low<=high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        return mid;

        else if (arr[mid] < key)
        low = mid + 1;

        else
        high = mid -1;

    }
    return -1;
}

int main() {
    int arr[100], n , key;
    cout << "Enter no. of elements:";
    cin >> n;

    cout << "Enter" << n << "Sorted Elements:\n";

    for (int i = 0; i < n; i++)
    cin >> arr[i];

    cout << "Enter elements to search:";
    cin >> key;

    int result = binarySearch (arr, n , key);
    if (result != -1)
    cout << "Element found at index:" << result << endl;
    else
    cout << "Element not found in the array. \n";
    return 0;
}