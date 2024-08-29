#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int num){
    string s=to_string(num);
    int i=0;
    int j=s.size()-1;
    while(j>i){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    int a;
    cin >> a;
    int b;
    cin>>b;
    vector<int>palindrome;
    for(int i=a;i<=b;i++){
        if(ispalindrome(i)){
            palindrome.push_back(i);
        }
    }
    for(int i=0;i<palindrome.size();i++){
         cout<<palindrome[i]<<" ";
    }
    return 0;
}
