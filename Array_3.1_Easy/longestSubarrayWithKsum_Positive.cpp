/**
 * brute force approach can be generating all the sub 
 * array.  (see the notes )
 * 
 * 
 */





/**
 * 
 * 
 * 
 */

#include"bits/stdc++.h"
using namespace std;

#define ll long long 

void code() {
   int n; cin >> n; 
   int k ; cin >> k;
   int maxlen = 0; 
   vector<int>v(n); 
   for(int i = 0; i < n; i++) {
    cin >> v[i]; 
   } 
   ll sum = v[0]; 
   int left = 0, right = 0; 
   while(right < n) {
    if(sum == k) {
        maxlen = max(maxlen, right - left + 1); 
    }

    right++; 
    if(right < n) {
        sum += v[right]; 
    }
    while(sum > k and left <= right) {
        sum -= v[left]; 
        left++; 
    }
   } 
   cout << maxlen << endl; 
   return; 
}


int32_t main(){
    
   code(); 
   return 0; 
} 
















// it is the optimal code for an array having zero, negative and positive. but if the array
//only contain zero and positive we can further optimize it. 


// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// void code() {
   
//    long long int k;
//    int n;
//    cin >> n; 
//    cin >> k;
//    vector<int>a(n); 
//    for(int i = 0; i < n; i++) {
//     cin >> a[i]; 
//    }
//    map<int,int>mp; 
//    int sum = 0;
//    int len = 0;
//    for(int i = 0; i < n; i++) {
//      sum = sum + a[i]; 
//      if(sum == k) {
//         len = max(len , i + 1);
//      }
//      else if(sum > k) {
//         int x = sum - k; 
//         if(mp.find(x) != mp.end()) {
//             len = max(len, i - mp[x]); 
//         }  
//      }
//      /**
//       * important key : this below code is for having zero in the array . if we have zero elements the sum will 
//       * remain same. and we have to take the elements that is as left as possible thats why we 
//       * don't update the index of the sum.
//       */ 
//      if(mp.find(sum) == mp.end()) {
//         mp[sum] = i ;
//      }
//    }    
//    cout << len << endl;
//    return; 
// }


// int32_t main(){
	
//    code(); 
//    return 0; 
// }