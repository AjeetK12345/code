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
    for(int row=-n;row<=n;row++){
        int spaces=2*abs(row);
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        
        int maxele=n-abs(row);
        
        for(int i=0;i<maxele;i++){
            cout<<i<<" ";
        }
        
        for(int i=maxele;i>0;i--){
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
    return 0;
}