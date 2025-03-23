#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"please enter value of n :"<<endl;
  cin>>n;
  int i = 2;
  while(i<n)
  {
    n%i;
    if (n%i==0)
    {
      cout<<"n is not prime"<<endl;
    }
    i+=1;
    
  }
}