#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int cars[n];
	    for(int i=0; i<n; ++i){
	        cin>>cars[i];
	    }
	    
	    int ans = 1, prev=cars[0];
	    for(int i=1; i<n; ++i){
	        if(cars[i]<=prev)
	            ans++;
	           prev = min(prev, cars[i]);;
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
