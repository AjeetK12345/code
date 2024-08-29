/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void ReplaceCharacter(string str, int n, char ch1, char ch2){
    for(int i=0;i<n;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
        else if(str[i]==ch2){
            str[i]=ch1;
        }
    }
    cout<<str;
}
int main()
{
    string str;
    cin>>str;
    char ch1;
    cin>>ch1;
    char ch2;
    cin>>ch2;
    int n=str.size();
    ReplaceCharacter(str,n,ch1,ch2);
    return 0;
}