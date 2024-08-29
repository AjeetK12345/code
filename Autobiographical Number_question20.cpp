#include <bits/stdc++.h>
using namespace std;
int Distinctsum(string str){
    int sum=0;
    set<char>st;
    for(int i=0;i<str.size();i++){
        sum+=(str[i]-'0');
        st.insert(str[i]);
    }
    if(sum!=str.size()){
        return 0;
    }
    return st.size();
}
int main(){
    string str;
    cin>>str;
    cout<<Distinctsum(str);
    return 0;
}
