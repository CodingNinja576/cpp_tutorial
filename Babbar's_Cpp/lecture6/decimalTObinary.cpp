#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no. to convert from decimal to binary : "<<endl;
  cin >>n;
  float ans =0;
  int i =0;
  while(n!=0){
    int bit = (n&1);
    ans = (bit * pow(10,i))+ans;
    i++;
    n = n>>1;

  }
  cout<<"n in bit is : "<< ans <<" ";
}