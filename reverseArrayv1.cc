#include <iostream>
using namespace std;

int main() {
    int ncases;
    cin >> ncases;
    while(ncases--){
        int size;
        cin>> size;
        
        int v[size];
        for(int i=0;i<size;++i){
            cin >> v[i];
        }
        
        for(int i=size-1;i>=0;i--){
            cout <<v[i]<<" ";
        }
        cout << endl;
    }
	return 0;
}