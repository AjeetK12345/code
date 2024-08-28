/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int findCount(int arr[], int n, int num, int diff){
    int count=0;
    
    for(int i=0;i<n;i++){
        if(abs(arr[i]-num)<=diff){
            count++;
        }
    }
    if(count>0) return count;
    else return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int diff;
    cin>>diff;
    
    cout << findCount(arr,n,num,diff);
    return 0;
}
