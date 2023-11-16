/** notes:

     bruteforce
      : take all the non zero elements to a temporary 
     array. then 
     for(int i = 0; i < temp.size(); i++) {
	    ar[i] = temp[i]; 
     }
     for(int i = temp.size(); i < n; i++) {
	    ar[i] = 0; 
     }

**/


#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	

   int n;cin >> n; 
   vector<int>v(n); 
   for(int i = 0; i < n; i++) {
      cin >> v[i]; 
   }
   int j = -1; 
   for(int i = 0; i < n; i++) {
   	if(v[i] == 0) {
   		j = i; break; 
   	}
   }
   for(int i = j + 1; i < n; i++) {
   	if(v[i] != 0) {
   		swap(v[i], v[j]); 
   		j++ ;
   	}
   }
   for(auto &i : v) cout << i << " "; 
   return 0; 
} 