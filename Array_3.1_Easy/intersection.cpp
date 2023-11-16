#include"bits/stdc++.h"
using namespace std;

#define ll long long 

int32_t main(){
	
   int n1, n2; cin >> n1 >> n2; 
   vector<int>v1(n1); 
   vector<int>v2(n2); 
   for(int i = 0; i < n1; i++) {
   	cin >> v1[i]; 
   }
   for(int i = 0; i < n2; i++) {
   	cin >> v2[i]; 
   }  
   int i = 0, j = 0;
   vector<int>intersection; 
   while(i < n1 and j < n2) {
   	 if(v1[i] < v2[j]) {
   	 	i++; 
   	 }
   	 else if(v2[j] < v1[i]) {
   	 	j++; 
   	 }
   	 else {
   	 	intersection.push_back(v1[i]); 
   	 	i++; 
   	 	j++; 
   	 }
   }
   for(auto i : intersection) {
   	cout << i <<" "; 
   }
   return 0; 
} 


// here goes the better approach. 

// #include"bits/stdc++.h"
// using namespace std;

// #define ll long long 

// int32_t main(){
	
//    int n1, n2; cin >> n1 >> n2;
//    vector<int>v1(n1);
//    vector<int>v2(n2); 
//    vector<int>visited(n2); 
//    for(int i = 0; i < n1; i++) {
//    	 cin >> v1[i];  
//    }
//    for(int i = 0; i < n2; i++) {
//    	 cin >> v2[i];  
//    }

//    for(int i = 0; i < n2; i++) {
//    	visited[i] = 0; 
//    }
//    vector<int>intersection;
//    for(int i = 0; i < n1; i++) {
//      for(int j = 0; j < n2; j++) {
//      	if(v1[i] == v2[j] and visited[j] != 1) {
//      		intersection.push_back(v2[j]); 
//      		visited[j] = 1;
//      		break; 
//      	}
//      }
//    }
//    for(int i = 0; i < intersection.size(); i++) {
//    	cout << intersection[i] << " "; 
//    }
//    return 0; 
// } 