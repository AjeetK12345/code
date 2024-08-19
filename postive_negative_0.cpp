#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    int res1=0;
    int res2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            res1++;
        }else{
            res2++;
        }
    }
    if(res1==res2){
        cout<<0<<endl;
    }else if(res1>res2){
        cout<<"negative integer"<<endl;
    }else{
        cout<<"positive integer"<<endl;
    }
    
    return 0;
    
}
