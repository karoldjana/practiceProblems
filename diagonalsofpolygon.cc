#include <iostream>
using namespace std;

int main() {
	int ncases;
	cin >> ncases;
	while(ncases--){
	    int num;
	    cin >> num;
	    cout << (num*(num-3))/2<<endl;
	}
	return 0;
}