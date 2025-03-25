#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input the value of n : ";
  cin>>n;
  
  int row =1;
  char ch = 'A';
    while(row<=n){
    int col =1;
    while(col<=row){
      char cha = 'A'+row+col-2;
      cout<<cha<<" ";
      col++;
    }
    cout<<endl;
    row++;
  }
}