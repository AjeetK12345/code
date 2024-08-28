#include <bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int sum, int n, vector<int>& arr) {
    if (n < 2) {
        return -1;  // Return -1 if there are fewer than 2 elements
    }

    sort(arr.begin(), arr.end());

    if ((arr[0] + arr[1]) <= sum) {
        return arr[0] * arr[1];  // Return product of the two smallest elements if condition is met
    } else {
        return -1;  // Return -1 if the sum condition is not met
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cin >> sum;

    cout << ProductSmallestPair(sum, n, arr);
    return 0;
}
