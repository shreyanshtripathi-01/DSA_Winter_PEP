#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<float> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<vector<float>> buckets(n);

    for (float x : arr) {
        int index = n * x;
        buckets[index].push_back(x);
    }

    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (float x : buckets[i]) {
            arr[k++] = x;
        }
    }

    for (float x : arr) cout << x << " ";
    return 0;
}
