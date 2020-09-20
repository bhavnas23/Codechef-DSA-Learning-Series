#include <iostream>
using namespace std;

int main() {
	// your code goes here
	   cin.tie(NULL);
    ios_base::sync_with_stdio(false); 
 
	int t;
	cin>>t;
	while(t--){
	    int g;
	    cin>>g;
	    while(g--){
	        int i, n, q;
	        cin>>i>>n>>q;
	        if(i==q)
	            cout<<n/2;
	        else
	            cout<<(n-n/2);
	       cout<<endl;
	    }
	}
	return 0;
}
