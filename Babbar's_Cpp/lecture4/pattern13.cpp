#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;
  int rows=1;
  char ch = 'A';
  while(rows<=n){
    int col =1;
    while(col<=n){
      cout<<ch<<" ";
      ch=ch+1;
      col = col+1;

    }
    cout<<endl;
    rows = rows+1;
  }
}