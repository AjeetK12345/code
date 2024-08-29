#include <bits/stdc++.h>
using namespace std;
void MaxInArray(vector<int>&arr, int length){
    int max=INT_MIN;
    int index=-1;
    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    cout<<max<<endl<<index;
}
int main() {
    int n;
    cin>>n;
    
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    MaxInArray(v,n);
    return 0;
}
