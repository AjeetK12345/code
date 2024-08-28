#include <bits/stdc++.h>
using namespace std;

string MoveHyphen(string str,int n){
    string res="";
    for(int i=0;i<n;i++){
        if(str[i]=='-'){
            res+=str[i];
        }
    }
    for(int i=0;i<n;i++){
        if(!(str[i]=='-')){
            res+=str[i];
        }
    }
    return res;
}

int main() {
    //int n;
    //cin >> n;
    
    string str;
    cin >> str;
    int n=str.size();

    cout<<MoveHyphen(str,n);
    return 0;
}
