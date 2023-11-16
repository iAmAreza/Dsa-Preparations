#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	
  bool flag = true;
  vector<int>v = {1,2,3,5}; 
  for(int i = 1; i < v.size(); i++) {
  	if(v[i]  < v[i - 1]) {flag = false;}
  }
  if(flag) {
  	cout << "sorted" << endl;
  }else {
  	cout << "not sorted" << endl;
  }
} 