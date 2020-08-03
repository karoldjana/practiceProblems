#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
	    string s; 
	    cin>>s; 
	    int k=1;
	    sort(s.begin(),s.end());
	    for(int i=0; i<s.size()-1;i++){
	        if(s[i]==s[i+1]) {k=0;}
	    }
	    cout<<k<<endl;
	}
	return 0;
}