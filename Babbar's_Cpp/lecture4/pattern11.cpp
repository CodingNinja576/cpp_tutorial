#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Please enter the value of n :";
  cin>>n;
  char ch  = 'A';
  int row =1;
  while(row<=n){
    int col =1;
    while(col<=n){
      char cha = ('A'+row-1);
      cout<<cha<<" ";
      col = col+1;
    }
    cout<<endl;
    row = row+1;
  }
}