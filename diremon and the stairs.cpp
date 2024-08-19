/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int res=0;
    if(m>n){
        res=-1;
    }else{
        if(n%2!=0){
            res=(n/2)+1;
        }else{
            res=(n/2);
        }
        
        while(res%m >0){
            res++;
        }
    }
    cout<<res;
    
    return 0;
    
}