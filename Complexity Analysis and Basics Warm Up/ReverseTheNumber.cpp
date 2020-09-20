#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int rev_n=0;
	    while(n){
	        rev_n = rev_n*10+n%10;
	        n/=10;
	    }
	    cout<<rev_n<<endl;
	}
	
	
	return 0;
}
