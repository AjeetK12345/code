#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    if (n < 2) {
        return 0;
    }
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    
    vector<int> even;
    vector<int> odd;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }
    
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    cout << even[even.size() - 2] + odd[odd.size() - 2] << endl;
    
    return 0;
}
