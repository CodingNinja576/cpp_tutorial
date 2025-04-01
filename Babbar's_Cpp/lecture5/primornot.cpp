#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no. you want to check whether it is prime or not : ";
  cin>>n;
  bool isPrime = 1;
  for(int i =2 ; i<n;i++){
    if(n%i==0){
      // cout<<"Entered no is not prime no ";
      isPrime = 0;
      break;
    }
   
  }

  if(isPrime==0){
    cout<<"Entered no. is not prime :"<<endl;
  }
  else{
    cout<<"entered no is prime";
  }
}