#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
   vector<int>v = {1,2,3,4,5,6,7}; 
   int n  = v.size(); 
   int k = 7; 
   k = k % n; 
   vector<int>temp; 
   for(int i = 0; i < n-k; i++) {
      temp.push_back(v[i]); 
   }
   for(int i = n - k; i < n; i++) {
      v[i - (n - k)] = v[i]; 
   }
   for(int i = k; i < n; i++) {
      v[i] = temp[i - k]; 
   }
   for(auto &i : v) {
      cout << i << " "; 
   }
   
    // reverse(v.begin() + (n - k), v.end()); 
    // reverse(v.begin(), v.begin() + (n - k)); 
    // reverse(v.begin(), v.end()); 
    // for(auto &i : v) {
    //   cout << i <<" "; 
    // }
    cout << endl; 
} 