#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"What is n : ?";
  cin>>n;
  int rows = 1;
  while(rows<=n){
    int space = rows -1;
    while(space){
      cout<<" ";
      space --;
    }
    int colm = n-rows+1;
    while(colm){
      cout<<n-colm+1;
      colm--;
    }
    
    cout<<endl;
    rows++;
  }
}