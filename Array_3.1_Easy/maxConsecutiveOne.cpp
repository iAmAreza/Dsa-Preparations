#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
   int n; cin >> n; 
   vector<int>v(n); 
   for(int i = 0; i < n; i++) {
   	cin >> v[i]; 
   }
   int maxi = 0; 
   int cnt = 0; 
   for(int i = 0; i < n; i++){
   	 if(v[i] == 1) {
   	 	cnt++;
   	 	maxi = max(cnt, maxi); 
   	 }
   	 else {
   	 	cnt = 0; 
   	 }
   }
   cout << maxi << endl;  
   return 0; 
} 