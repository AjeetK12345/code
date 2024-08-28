/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int Checkpassword(char str[],int n) {
    //at least 4 character
    if(n<4){
        return 0;
    }
    //starting character must be a number
    if(str[0]-'0' >=0 && str[0] -'0' <=9){
        return 0;
    }
    int cap=0;
    int num=0;
    for(int i=0;i<n;i++){
        if(str[i]==' ' && str[i]=='/'){
            return 0;
        }
        if(str[i]>=65 && str[i]<=90){
            cap++;
        }
        else if(str[i]-'0' >=0 && str[i]-'0' <=9){
            num++;
        }
    }
    return (num>=1 && cap>=1);
}

int main() {
    string str;
    cin >> str;
    int n=str.size();
    char *c=&str[0];
    cout << Checkpassword(c,n);
    return 0;
}
