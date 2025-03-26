#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"What is n : ?";
  cin>>n;
  int rows = 1;
  while(rows<=n){
    int space = n -rows;
    while(space){
      cout<<" ";
      space --;
    }
    int colm =1 ;
    while(colm<=rows){
      cout<<rows;
      colm++;
    }
    cout<<endl;
    rows++;
  }
}