// 1281. Subtract the Product and Sum of Digits of an Integer

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

// class Solution {
//   public:
//       int subtractProductAndSum(int n) {
//           int prod = 1;
//           int sum = 0;
//           while(n != 0){
//               int digit = n%10;
//               sum = sum + digit;
//               prod = prod*digit;
//               n = n / 10;
//           }
//           float answer = prod - sum;
//           return answer;
          
//       }
//   };


// -------------------------------------------------------------------------------------------------------------

// 191. Number of 1 Bits

// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

// class Solution {
//   public:
//       int hammingWeight(int n) {
  
//           int count = 0;
//           while(n!=0){
//               // checking last bit
//               if(n&1){
//                   count++;
//               }
//               n= n>>1;
//           }
//           return count;
//       }
//   };