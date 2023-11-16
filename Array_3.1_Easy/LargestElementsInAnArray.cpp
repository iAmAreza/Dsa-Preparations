/*
  key : we can use sorting alogrithm that is O(nlogn). that is brute force also 
  optimal : comparing with the a[0] elements. 

*/


#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
    	
   vector<int>v = {1,2,3,4,5,6};
   int len = v.size();
   int max = v[0];   
   for(int i = 1; i < len; i++) {
   	if(v[i] > max) {
   		max = v[i];
   	} 
   }
   cout << max << endl;
   return 0; 
} 