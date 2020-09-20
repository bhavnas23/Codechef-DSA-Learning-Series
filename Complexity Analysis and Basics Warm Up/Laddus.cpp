#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int  acts;
	    string origin;
	    cin>>acts>>origin;
	    long ans=0;
	    while(acts--){
	       // cout<<" acts:"<<acts;
	        string act;
	        int val;
	        cin>>act;
	       // cout<<" act: "<<act;
	        if(act=="CONTEST_WON"){
	            cin>>val;
	            ans+=300+max(0, 20-val);
	        }
	        else if(act=="TOP_CONTRIBUTOR"){
	            ans+=300;
	        }
	       else if(act=="BUG_FOUND"){
	           cin>>val;
	           ans+=val;
	       }
	       else if(act=="CONTEST_HOSTED"){
	           ans+=50;
	       }
	       else
	            ans+=0;
	    }
	    if(origin=="INDIAN")
	        cout<<(ans/200)<<endl;
	    else
	        cout<<(ans/400)<<endl;
	}
	return 0;
}
