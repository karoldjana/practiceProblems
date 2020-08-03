#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        double s= (a+b+c)/2.0;
        double area = 0.000000;
        if((a+b)>c && (a+c)>b && (b+c)>a){
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout << fixed<< setprecision(6)<< area <<endl;
        } 
        else cout << fixed<< setprecision(6)<< area <<endl;
    }
	return 0;
}