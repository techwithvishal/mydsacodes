#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking size of array from user
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;   // Variable to store total sum

    // Input array elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   // Add element to sum
    }

    // Output the sum
    cout << "Sum of array elements = " << sum << endl;

    return 0;
}

