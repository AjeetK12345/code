/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int diffofSum(int n,int m) {
    int sumdivisiblebyn=0;
    int notdivisiblebyn=0;
    for(int i=1;i<=m;i++){
        if(i%n==0){
            sumdivisiblebyn+=i;
        }else{
            notdivisiblebyn+=i;
        }
    }
   
    int diff=abs(sumdivisiblebyn-notdivisiblebyn);
    return diff;
}

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout << diffofSum(n,m);
    return 0;
}
