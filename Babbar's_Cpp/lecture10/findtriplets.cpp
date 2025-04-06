// Brute force approach..........


// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
// 	vector<vector<int>> store;
// 	for(int i = 0 ; i <arr.size();i++){
// 		for(int j = i+1 ; j<arr.size();j++){
// 			for(int l = j+1 ; l< arr.size();l++){
// 				if(arr[i]+arr[j]+arr[l]==K){
// 					vector<int> temp;
// 					temp.push_back(arr[i]);
// 					temp.push_back(arr[j]);
// 					temp.push_back(arr[l]);
// 					store.push_back(temp);
					
// 				}
// 			}
// 		}
		
// 	}
// 	return store;
// }