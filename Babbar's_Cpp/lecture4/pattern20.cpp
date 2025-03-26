#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input the value of n : ";
  cin >>n;
  int rows = 1;
  while(rows<=n){
    int colm = n-rows+1; ;
    while(colm){
      cout<<'*';
      colm--;
    }
    cout<<endl;
    rows++;
  }

}