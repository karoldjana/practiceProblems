#include <iostream>
using namespace std;
//0.77 time 

int main() {
	int ncases;
	cin >> ncases;
	while(ncases--){
	    int size;
	    cin >> size;
	    
	    int v[size], b[size],index2=0;
	    for(int i=0; i<size;++i){
	        cin >> v[i];
	    }
	    
	    int max = 0;
	    for(int i=size-1; i>=0;i--){
	        if(v[i]>=max){
	            max = v[i];
	            b[index2]=max;
	            ++index2;
	        }
	    }
	    
	    for(int i=index2-1;i>=0;i--){
	        cout << b[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}