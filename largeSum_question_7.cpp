#include <bits/stdc++.h>
using namespace std;

int largeSmallSum(vector<int> arr) {
    int n = arr.size();
    
    // Return 0 if array length is 3 or less
    if (n <= 3) {
        return 0;
    }

    vector<int> evenPositions;
    vector<int> oddPositions;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenPositions.push_back(arr[i]);
        } else {
            oddPositions.push_back(arr[i]);
        }
    }

    // Sort vectors to find second largest and second smallest
    sort(evenPositions.begin(), evenPositions.end());
    sort(oddPositions.begin(), oddPositions.end());

    // Ensure that there are at least two elements to find the second largest/smallest
    int sum1 =  evenPositions[evenPositions.size()-2] ;
    int sum2 =  oddPositions[oddPositions.size()-2] ;

    return sum1 + sum2;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << largeSmallSum(arr);
    return 0;
}
