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
    int sum=n;//for all right case
    for(int i=1;i<n;i++){
        sum+=(n-i)*i;
    }
    cout<<sum;
    return 0;
}