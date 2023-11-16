/**
 * Brute-Force : we can use a set here. iterate throug the whole
 * array and insert all of them into the set.and finally give
   the ans as = set_name.size() 
 * complexity is = O(nlogn + 1) 
 * Extra Space  = O(n) for set. if all the elements are 
 * unique. 
 * 
 * optimal : two pointer approach: O(n) is the complexity
 * 
 * */


#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	

   vector<int>v = {1,1,1,1,1}; 
   int j = 1;
   for(int i = 0; i < v.size(); i++) {
      if(v[i] != v[j]) {
      	j++;
      	v[j] = v[i]; 
      }
   } 
   cout << j << endl; 
   
   return 0; 
}  