#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	 int winner = 0;
    int a = 0, b = 0;
    int lead = 0;
    while(n--)
    {
        int p1, p2; 
        cin >> p1 >> p2;
        a += p1;
        b += p2;
        int z = abs(a - b); 
        if(z > lead) 
        {
            lead = z; 
            a > b ? winner = 1 : winner = 2;
        }
    }
    cout << winner << " " << lead << endl; 
	
	return 0;
}
