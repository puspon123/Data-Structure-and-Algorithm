#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int left = 0, right = n - 1;
    bool found = false;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == key) {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < key) {
            left = mid + 1;   // Search right half
        }
        else {
            right = mid - 1;  // Search left half
        }
    }

    if(!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}
