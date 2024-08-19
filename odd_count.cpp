#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    unordered_map<string, int> mp;
    
    // Count frequency of each balloon color
    for (auto it : s) {
        mp[it]++;
    }
    
    // Find the first balloon color with an odd frequency
    for (auto  it : s) {
        if (mp[it] % 2 != 0) {
            cout << it << endl;
            return 0; // Exit after finding the first odd frequency
        }
    }
    
    // If no odd frequency is found
    cout << "All are even" << endl;
    return 0;
}
