#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"input the value of n ";
  cin>>n;

  int i =1;
  int count = 1;
  while(i<=n){
    int j =1;
    
    while(j<=i){
      cout<<count;
      cout<<" ";
      count =count +1;
      j = j+1;
    }
    cout<<endl;
    i=i+1;
  }
}