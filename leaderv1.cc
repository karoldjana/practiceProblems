#include <iostream>
using namespace std;

//se pasa demasiado tiempo

int main() {
	int ncases;
	cin >> ncases;
	while(ncases--){
	    int size;
	    cin >> size;
	    
	    int v[size];
	    for(int i=0; i<size;++i){
	        cin >> v[i];
	    }
	    
	    int index = 0;
	    int op; 
	    bool leader = true;
	    
	    while(index<size){
	        op = v[index];
	        for(int i = index; i<size and leader;++i ){
	            if(op >= v[i]) leader = true;
	            else leader = false;
	        }
	        if(leader)cout <<op << " ";
	        else leader = true;
	        ++index;
	    }
	    cout << endl;
	}
	return 0;
}