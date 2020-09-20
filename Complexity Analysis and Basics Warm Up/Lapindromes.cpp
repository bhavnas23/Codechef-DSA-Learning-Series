#include <bits/stdc++.h>
using namespace std;

bool cmp(string s, int i, int j){
    int n = s.size();
    for(; j<n; ++i, ++j ){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.size();
	    if(n%2==0){
	        sort(s.begin(), s.begin()+n/2);
	        sort(s.begin()+n/2,s.end());
	        if(cmp(s, 0, n/2))
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    }
	    else{
	        sort(s.begin(), s.begin()+n/2);
	        sort(s.begin()+n/2+1,s.end());
	        if(cmp(s, 0, n/2+1))
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    }
	}
	return 0;
}