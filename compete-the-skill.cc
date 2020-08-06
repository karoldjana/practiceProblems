#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int A[3], B[3];
    while(t--){
        int puntA = 0, puntB = 0;
        for(int i=0; i<3; ++i) cin >> A[i];
        for(int i=0; i<3; ++i) cin >> B[i];
        for(int i=0; i<3; ++i){
            if(A[i]>B[i]) ++puntA;
            else if( A[i]<B[i]) ++puntB;
        }
        cout << puntA << " "<< puntB<<endl;
    }
	return 0;
}