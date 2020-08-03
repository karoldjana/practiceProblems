#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
//0.89

int main() {
  //code
  int ncases, size, rot;
  cin >> ncases;
  
  int index = 0;
  while(index < ncases){
      cin >> size >> rot;
      
      vector<int>v1(size-rot);
      vector<int>v(rot);
      
      int num,j=0;
      for(int i=0;i<size;++i){
          cin >> num;
          if(i<rot) v[i]=num;
          else{
             v1[j] = num;
             ++j;
          } 
      }
      
      vector<int>res(size);
      
      int jj = 0;
      for(int i=0;i<size;++i){
          if(i<(size-rot)) res[i] = v1[i];
          else{
              res[i] = v[jj];
              ++jj;
          }
      }
      
      for(int i=0;i<res.size();++i){
          if(i==0) cout << res[i];
          else cout <<" "<<res[i];
      }
      cout << endl;
      
      index++;
  }
  
  return 0;
}