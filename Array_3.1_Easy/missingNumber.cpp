// key : this will contain all the bruteforce better and optimal
// solution : 

/**
 *Optimal: sum of 1 to n elments and then sum of the given
 * array elements than subtract them. this will be the 
 * answer.  
 * 
 * if the array size is 10^5 we need for doing this 
 * apporach to store the sum  we have to use long long 
 * variable. n*(n + 1) / 2. it will exceeds the size of integer
 * variable. but the xor will not that big. or we don't need to use
 * long long for this. 
 * 
 **/
#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	
   int n; cin >> n; 
   vector<int>v(n - 1); 
   int xor1 = 0, xor2 = 0;
   // here the complexity is o(2n) as we run 
   // two loops here. 
   // for(int i = 0; i < n-1; i++) {
   // 	cin >> v[i]; 
   // 	xor1 = xor1 ^ v[i]; 
   // }
   // for(int i = 1; i <= n; i++) {
   // 	xor2 = xor2 ^ i; 
   // }
   // int ans = xor2 ^ xor1; 
   // cout << ans << endl;

   // O(n) approach

    for(int i = 0; i < n-1; i++) {
    	cin >> v[i]; 
    	xor1 = xor1 ^ (i + 1); 
    	xor2 = xor2 ^ (v[i]); 
    } 
    xor1 = xor1 ^ n; 
    int ans = xor1 - xor2; 
    cout << ans << endl;
   return 0; 
} 
























// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
     	
   
//    return 0; 
// } 


// better appraoch : 
 
// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    int n; cin >> n;
//    vector<int>v(n) ;
//    for(int  i = 0; i < n-1; i++) {
//    	cin >> v[i]; 
//    } 
//    for(int i = 1; i <= n ; i++) {
//    	 bool flag = false;
//    	for(int j = 0; j < n - 1; j++) {
//    		if(i == v[j]) {
//    			flag = true;
//    		}
//    	}
//    	if(flag == false) {
//    		cout << i << ""; 
//    		break;
//    	}
//    }
//    return 0; 
// } 

// Time complexity : 
// in the worst case the loop will run for 
//O(N * N) times. it is a hypotheical senario. means worst 
//case. suppose the outer for loop run till n and the last number
// is missing in the array. the innner loop will run for n times
//also  
// space complexity O(1) no extra space.



// here is the better solution : 
// but there we take extra space 
// time complexity : O(n)
// space complexity : O(n)

// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    int n; 	
//    cin >> n; 
//    vector<int>v(n); 
//    vector<int>hash(n + 1, 0); 
//    for(int i = 0; i < n-1; i++) {
//    	cin >> v[i]; 
//    	hash[v[i]] = 1;
//    }  
//    for(int i = 1; i <= n; i++) {
//    	if(hash[i] == 0) {
//    		cout << i << endl; 
//    		break; 
//    	}
//    }
//    return 0; 
// } 