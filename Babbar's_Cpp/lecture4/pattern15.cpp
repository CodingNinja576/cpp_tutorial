#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input the value of n : ";
  cin>>n;
  int row = 1;
  char ch = 'A';
  while(row<=n){
    int col =1;
    while(col<=row){
      //cout<<ch<<" ";  // or we can directly use formula 'A'+row-1;
      char cha = 'A'+row-1;
      cout<<cha;
      col++;
    }
    cout<<endl;
    //ch++;
    row++;
  }
}