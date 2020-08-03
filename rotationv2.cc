#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
	//code 0.54
	int ncases;
	cin >> ncases;
	
	while(ncases--){
	    int size, rot;
	    cin >> size >> rot;
	    int v[size];
	    
	    for(int i=0;i<size;++i){
	        cin >> v[(i+size-rot)%size]; //right rotation
	    }
	    
	    for(int i=0;i<size;++i){
          if(i==0) cout << v[i];
          else cout <<" "<<v[i];
      }
      cout << endl;
	}
	
	return 0;
}