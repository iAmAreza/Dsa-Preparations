/**
 * BruteForce : sort the array and the check from the last
 * wheter the number is lesser the largest lastindexed number.
 * 
 * Better : just identify the largest elements. then 
 * iterate through the array to find the second 
 * largest. O(n) complexity. 
 * 
 * 
 * 
 * */


// better approach

// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    vector<int>v = {1,2,3,4,5,6}; 
//    int maximum = v[0];
//    for(int i = 1; i < v.size(); i++) {
//    	if(maximum < v[i]) maximum = v[i]; 
//    }
//    int secondLargest = -1; 
//    for(int i = 0; i < v.size(); i++) {
//    	if(maximum > v[i] && v[i] > secondLargest ) {
//         secondLargest = v[i]; 
//    	}
//    }
//    cout << secondLargest << endl; 
//    return 0; 
// } 

//here is optimal approach 

#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	
   vector<int>v = {1,2,3,4,5,8,10,9}; 
   int largest = v[0]; 
   int secondLargest = -1; 
   for(int i = 1; i < v.size(); ++i) {
   	 if(v[i] > largest) {
   	 	secondLargest = largest; 
   	 	largest = v[i];
   	 }
   	 else if(v[i] > secondLargest && v[i] < largest) {
   	 	secondLargest = v[i]; 
   	 }
   }

   cout << secondLargest << endl;
   return 0; 
} 


// --------------- for finding second smallest elements------
// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    vector<int>v = {-1,-2,-3,-4,-5,-9,-8}; 
//    int smallest = v[0]; 
//    int secondSmallest = INT_MAX;
//    for(int i = 1; i < v.size(); ++i) {
//    	if(v[i] < smallest) {
//    		secondSmallest = smallest; 
//    		smallest = v[i]; 
//    	}
//    	else if(v[i] < secondSmallest && v[i] > smallest) {
//    		secondSmallest = v[i]; 
//    	}
//    }
//    cout << secondSmallest << endl;  
//    return 0; 
// } 