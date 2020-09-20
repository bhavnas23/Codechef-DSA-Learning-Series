#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long budget[n];
	for(int i=0; i<n; ++i)
	    cin>>budget[i];
	sort(budget, budget+n);
	long long ans = 0;
	for(int i=0; i<n; ++i){
	    ans = max(ans, budget[i] * (n-i));
	}
	cout<<ans;
	return 0;
}
