/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int MaxExponents(int a, int b) {
    int maxCount = 0;
    
    for (int i = a; i <= b; i++) {
        int count = 0;
        int quotient = i;
        while (quotient % 2 == 0 && quotient != 0) {
            count++;
            quotient /= 2;
        }
        maxCount = max(maxCount, count);
    }
    
    return maxCount;
}
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<MaxExponents(x,y);
    return 0;
}