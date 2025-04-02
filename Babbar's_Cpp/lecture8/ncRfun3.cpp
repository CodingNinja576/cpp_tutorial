#include<iostream>
using namespace std;

// This function will calculate factorial 
int factorial (int num){
  int fact = 1;
  for(int i = 1; i<=num;i++){
    fact = fact* i;
  }
  return fact;
}

  // This function will calculate ncr.....

  int ncr(int n , int r){
    int ans =  factorial(n) / (factorial(r) * factorial(n-r));
    return ans;
  }

int main(){

           int n , r;
           cout<<"Please enter the no. n and r "<< endl;
           cin>>n>>r;
           int ans = ncr(n,r);
           cout<<"NcR of n and r is : "<< ans << endl;
}