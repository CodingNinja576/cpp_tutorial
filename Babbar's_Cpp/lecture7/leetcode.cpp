// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// class Solution {
//   public:
//       int reverse(int x) {
          
          
//           int digit;
//           int rev_no=0;
//           while(x!=0){
//               digit=x%10;
//               if(rev_no>INT_MAX/10 || (rev_no<INT_MIN/10)){
//                   return 0;
//               }
//               rev_no = (rev_no*10)+digit;
              
//               x=x/10;
            
//           }
//           return rev_no;
          
//       }
//   };


//-----------------------------------------------------------------------------------------------------------
// 1009. Complement of Base 10 Integer  

// class Solution {
//   public:
//       int bitwiseComplement(int n) {
//           int m = n;
//           int mask = 0;
//           // Edge point...
//           if(n==0){
//               return 1;
//           }
//           while(m!=0){
//               mask = (mask<<1) | 1;
//               m=m>>1;
//           }
//           int ans = (~n) & mask;
//           return ans;
//       }
//   };





//--------------------------------------------------------------------------------------------------------------

