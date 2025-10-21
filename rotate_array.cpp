#include <iostream>
#include <vector>
using namespace std;

// Function to rotate array by k positions to the right
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // In case k > n

    // Reverse whole array
    reverse(arr.begin(), arr.end());
    // Reverse first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Reverse remaining elements
    reverse(arr.begin() + k, arr.end());
}

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter rotation count k: ";
    cin >> k;

    rotateArray(arr, k);

    cout << "Array after rotation: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
