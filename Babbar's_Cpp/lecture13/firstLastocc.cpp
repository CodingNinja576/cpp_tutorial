// First and Last Position of an Element In Sorted Array


// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.



// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.



// int firstocc(vector<int>& arr, int n, int k){
//   int s = 0;
//   int e = n-1;
//   int m = s +(e-s)/2;
//   int ans = -1;
//   while(s<=e){
//       if(arr[m]==k){
//           ans = m;
//           e= m -1;
//       }
//       else if(k<arr[m]){
//           e= m-1;
//       }
//       else if(k>arr[m]){
//           s = m+1;
//       }
//       m = s+(e-s)/2;
//   }
//   return ans;
// }

// int lastocc(vector<int>& arr, int n, int k){
//   int s = 0;
//   int e = n-1;
//   int m = s +(e-s)/2;
//   int ans = -1;
//   while(s<=e){
//       if(arr[m]==k){
//           ans = m;
//           s= e+1;
//       }
//       else if(k<arr[m]){
//           e= m-1;
//       }
//       else if(k>arr[m]){
//           s = m+1;
//       }
//       m = s+(e-s)/2;
//   }
//   return ans;
// }





// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//   pair<int,int> p;

//   p.first=firstocc(arr,n,k);
//   p.second=lastocc(arr,n,k);
//   return p;
// }
