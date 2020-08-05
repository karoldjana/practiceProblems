#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int size;
	    cin >> size;
	    int a[size];
	    for(int i=0; i<size;++i){
	        cin >> a[i];
	    }
	    
	    int aux = a[0];
	    for(int i=1; i<size;i+=2){
	        if(i<size){
	            a[i-1] = a[i];
	            a[i] = aux;
	            aux = a[i+1];
	        }
	    }
	    
	    for(int i=0; i<size;++i){
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}