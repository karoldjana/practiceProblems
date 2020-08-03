#include <iostream>
using namespace std;

int main() {
	 int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        int lowercase=0, uppercase=0, integer=0, specialchar = 0;
        for(int i=0;i<S.length();i++){
            if (S[i]>='a' && S[i]<='z') lowercase++;
            else if (S[i]>='A' && S[i]<='Z') uppercase++;
            else if (S[i]>='0' && S[i]<='9') integer++;
            else specialchar++;
        }
        cout<<uppercase<<endl;
        cout << lowercase<<endl;
        cout <<integer<< endl;
        cout <<specialchar<<endl;
        
    }
	return 0;
}