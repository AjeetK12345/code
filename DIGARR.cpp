#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
	    int n;// It represents the length of the string to be processed.
	    cin>>n;
	    
	    string str;//This is the input string that needs to be checked.
	    cin>>str;
	    
	    int b=0;//This variable will be used to keep track of the number of characters '0' and '5' encountered in the input string.
	    
	    for(int i=0;i<n;i++){//A for loop is used to iterate through each character of the input string str:

//If the current character is '0' or '5', the variable b is incremented by one.
//his loop calculates how many '0' and '5' characters are present in the string
	        if(str[i]=='0' || str[i]=='5'){
	            ++b;
	        }
	    }
	    
	    if(b>0){//If b is greater than 0, it means that the string contains at least one '0' or '5', so the program prints "YES" to indicate that the condition is satisfied.
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}