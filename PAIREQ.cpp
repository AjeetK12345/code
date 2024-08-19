#include <iostream>
using namespace std;
int const N = 1000 + 10;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;//
	    
	    int a[n];//It then declares an array a of size n to store the elements of the array. 
	    
	    int arr[N] = {0};//Another array arr of size N is declared and initialized with zeros. This array will be used to count the occurrences of each element in the input array.
	    
	    int max=0, index=0, count=0;// max will store the maximum occurrence count of any element, index will store the corresponding element's value, and count will keep track of how many elements need to be removed.
	    
	    for(int i=0; i<n; i++){//Reading Array Elements:
	        cin>>a[i];
	    }
	    
	    
	    for(int i=0; i<n; i++){//This loop iterates through the array a and updates the arr array with the count of occurrences of each element.
	        arr[a[i]]++;
	    }
	    
	    
	    for(int i=0; i<N; i++){//This loop finds the element with the maximum occurrence count by iterating through the arr array
	        if(arr[i]>max){
	            max = arr[i];//The max variable is updated to store the maximum count
	            index = i;//and the index variable is updated to store the corresponding element.
	        }
	    }
	    
	    
	    for(int i=0; i<n; i++){//. It increments the count variable whenever the current element a[i] is not equal to the most frequent element index.
	        if(a[i] != index){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
