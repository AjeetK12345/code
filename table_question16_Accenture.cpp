#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> table;
    for (int i = 1; i <= 10; i++) {
        table.push_back(n * i);
    }
    
    int sum = 0;
    for (int i = 0; i < table.size(); i++) {
        sum += table[i];
    }
    
    cout << "Sum of the multiplication table: " << sum << endl;
    
    return 0;
}
