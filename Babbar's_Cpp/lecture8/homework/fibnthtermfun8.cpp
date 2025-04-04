#include<iostream>
using namespace std;
int fibo(int n){
  int prev = 0;
  //cout<<prev << " ";
  int next = 1;
  //cout<<next<<" ";
  int num;
  for(int i = 1 ; i<=(n -2); i++){
      num = prev+next;
     
     prev = next;
     next = num ;

  }
  return num;


}
int main(){
  int n;
  cout<<"Enter the value of n : "<<endl;
  cin >>n;
  int nterm = fibo(n);
  cout<<nterm;


}