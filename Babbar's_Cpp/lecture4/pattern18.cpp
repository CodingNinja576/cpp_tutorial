#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<" input the value of n : ";
  cin>>n;
  int rows=1;
  while(rows<=n){
    int colm = 1;
    while(colm<=rows){
      char cha = 'A'+ n-rows+colm-1;
      cout<<cha<<" ";
      colm++;
    }
    cout<<endl;
    rows++;
  }
}