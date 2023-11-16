/**
 * for bruteforce just run a two loops and find the number
 * that occurs just one. O(n ^ 2) complexity. 
 * 
 * 
 * 
 */ 



#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
  
   int n; cin >> n; 
   vector<int>v(n); 
   int ans = 0; 
   for(int i = 0; i < n; i++) {
   	cin >>v[i]; 
   	ans = ans ^ v[i]; 
   }	
   cout << ans << endl; 
   return 0; 
} 











// here is the better solution .

// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    int n ; 
//    cin >> n; 
//    vector<int>v(n); 
//    unordered_map<int,int>mp;
//    for(int i  = 0; i < n; i++) {
//    	cin >> v[i]; 
//    	mp[v[i]]++; 
//    }
//    // for the below code the TC is O(n/2 + 1)
//    for(auto i : mp) {
//    	if(i.second == 1) {
//    		cout << i.first << endl; 
//    		break;
//    	}
//    }
//    return 0; 
// } 

/***
 * 
 * the time complexity will be 
 * O(NlogM)+ O(N/2 + 1)
 * size of the map will be O(N/2 + 1);  
 */ 