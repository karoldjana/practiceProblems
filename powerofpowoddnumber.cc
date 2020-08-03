#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long int par = 1;
	    long int res = 0;
	    //int par2 = par;
	    for(int i=0; i<n;++i){
	        res += pow(par,2);
	        par+=2;
	    }
	    cout << res <<endl;
	}
	return 0;
}