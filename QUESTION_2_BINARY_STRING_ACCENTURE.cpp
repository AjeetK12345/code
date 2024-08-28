/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int operationsBinaryString(string str) {
    if (str.empty()) {
        return -1; // Return -1 if the string is empty
    }

    int result = str[0] - '0'; // Initialize result with the first binary digit

    // Traverse the string, processing the operations
    for (int i = 1; i < str.size(); i += 2) {
        char op = str[i];
        int num = str[i + 1] - '0';

        if (op == 'A') {
            result = result & num;
        } else if (op == 'B') {
            result = result | num;
        } else if (op == 'C') {
            result = result ^ num;
        }
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    cout << operationsBinaryString(str);
    return 0;
}
