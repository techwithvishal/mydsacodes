#include <iostream>
using namespace std;

// Binary Search function (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0;            // Starting index
    int high = n - 1;       // Ending index

    while (low <= high) {
        int mid = (low + high) / 2;   // Middle index

        // Check if key exists at mid
        if (arr[mid] == key) {
            return mid;     // Return index where key found
        }

        // If key is greater, ignore left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }

        // If key is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }
    return -1;  // If key not found in array
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);       // Size of array

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    // Calling binary search
    int result = binarySearch(arr, n, key);

    // Checking result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}
