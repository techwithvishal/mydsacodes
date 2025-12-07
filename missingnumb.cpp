#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // numbers are from 1 to n

    int arr[n-1];
    int total = 0;

    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int expected = n * (n + 1) / 2;

    int missing = expected - total;

    cout << "Missing number: " << missing << endl;

    return 0;
}
