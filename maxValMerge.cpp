#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long max_sum = 0;
    if (arr[0] >= 0) {
        for (int i = 1; i < n; ++i) {
            max_sum += arr[i];
        }
        max_sum -= arr[0];
    } else if (arr[n - 1] <= 0) {
        for (int i = 0; i < n - 1; ++i) {
            max_sum += abs(arr[i]);
        }
        max_sum -= abs(arr[n - 1]);
    } else {
        for (int i = 0; i < n; ++i) {
            max_sum += abs(arr[i]);
        }
    }

    cout << max_sum << endl;

    return 0;
}
