#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cin >> target;

    int low = 0, high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            index = mid;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << index << endl;
    return 0;
}
