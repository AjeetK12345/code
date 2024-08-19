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
    
    int E[n];
    for(int i=0;i<n;i++){
        cin>>E[i];
    }
    
    int L[n];
    for(int i=0;i<n;i++){
        cin>>L[i];
    }
    
    int max_count=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        count+=E[i]-L[i];
        max_count=max(max_count,count);
    }
    cout<<max_count<<endl;
    return 0;
}