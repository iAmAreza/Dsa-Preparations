// butreforce solution : 

// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    vector<int>v = {1,2,3,4,5,6,7}; 
//    int k = 3; // 4 5 6 7 1 2 3 
//    vector<int>temp;
//    int n = v.size();  
//    k = k % n;
   
//    for(int i = 0; i < k; i++) {
//    	temp.push_back(v[i]); 
//    }

//    for(int i = k; i < v.size(); i++) {
//     v[i - k] = v[i]; 
//    }
   
//    for(int i = n - k; i < n; i++) {
//     v[i] = temp[i - (n - k)]; 
//    }
   
//    for(auto &i : v){
//    	cout << i << endl; 
//    }
//    return 0; 
// } 

// optimal solution : 

#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
 	
   vector<int>v = {1,2,3,4,5,6,7};
   int k = 3 ;
   int n = v.size();
   reverse(v.begin(), v.begin() + 3); 
   reverse(v.begin() + 3, v.end()); 
   reverse(v.begin(), v.end()); 
   for(auto &i : v) {
   	cout << i << " "; 
   }cout << endl;

   return 0; 
} 

// for reversing the array the correspoing code look like .

// void reverse(int arr[], int start, int end) {
// 	while(start < end) {
// 		swap(arr[start], arr[end]); 
// 		end--; 
// 		start++; 
// 	}
// }