/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Return -1 if the array is null
    if (arr.empty()) {
        cout << -1;
        return 0;
    }
    
    int amount_req_rats = r * unit;
    
    int arr_sum = 0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
    }
    // Return 0 if the total food is not sufficient
    if(amount_req_rats>arr_sum){
        cout<<0;
        return 0;
    }
    
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum >= amount_req_rats) {
            cout << i + 1; // Return the 1-based index of houses used
            return 0;
        }
    }
    
    return 0;
}
