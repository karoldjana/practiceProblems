#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string S;
	    cin >> S;
	    int count = 0;
	    for(int i=0; i<S.length();++i){
	        if(S[i]>='A' && S[i]<='Z') ++count;
	    }
	    cout <<count<<endl;
	}
	return 0;
}