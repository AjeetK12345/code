#include <bits/stdc++.h>
using namespace std;

string DectoNBase(int n, int num){
    string res="";
    
    int quoitent=num/n;
    vector<int>rem;
    rem.push_back(num%n);
    
    while(quoitent!=0){//repeat step 2 and 3 until quiotent becomes 0
        rem.push_back(quoitent%n);
        quoitent=quoitent/n;
    }
    
    for(int i=0;i<rem.size();i++){
        if(rem[i]>9){
            res+=(char)(rem[i]-9+64);
            
        }else{
            res+=to_string(rem[i]);
        }
    }
    return res;
    
}

int main() {
    int n;
    cin >> n;
    
    int num;
    cin >> num;

    cout <<DectoNBase(n,num);
    return 0;
}
