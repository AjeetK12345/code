/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int  Calculate(int m, int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        if ((i % 3 == 0) && (i % 5 == 0))
	    {
	        sum = sum + i;
	    }
    }
    return sum;
}
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<Calculate(x,y);
    return 0;
}