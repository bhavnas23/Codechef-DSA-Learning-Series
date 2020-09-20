#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long ans = 0;
	    long long div = 5;
	    while(1){
	        if(n/div<1)
	            break;
	        ans += n/div;
	        div = div*5;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
