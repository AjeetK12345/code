/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    int ele=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>ele){
            ele=v[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}