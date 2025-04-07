// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// class Solution {
//   public:
//       bool uniqueOccurrences(vector<int>& arr) {
          // unordered_map<int, int> countMap;
          // unordered_set<int> occurrences;
          
          // // Count occurrences of each number in the array
          // for (int num : arr) {
          //     countMap[num]++;
          // }
          
          // // Check for uniqueness in occurrences
          // for (auto pair : countMap) {
          //     if (occurrences.find(pair.second) != occurrences.end()) {
          //         return false; // Duplicate frequency found
          //     }
          //     occurrences.insert(pair.second);
          // }
          
          // return true; // All frequencies are unique


// ..............................My Brute force approach.................................

//           vector<int> store;
//           for(int i = 0 ; i<arr.size() ;i++ ){
//               int count = 0;
//               for(int j = 0 ; j<arr.size() ;j++){
//                   if(arr[i]==arr[j]){
//                       count++;
  
//                   }
  
//               }
//               store.push_back(count);
//           }
//           int ans = 0;
//           for(int i = 0 ; i<store.size();i++){
//               for(int j = 0; j<store.size();j++){
//                   if(i!=j &&store[i]==store[j]){
//                       return 0;
//                   }
//               }
              
//           }
//           return 1;
         
//       }
//   };



 
 