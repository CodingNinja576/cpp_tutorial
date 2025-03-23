#include<iostream>
using namespace std;
int main(){
  int rows;
  cout<<"Please enter the no. of rows : "<< endl;
  cin>>rows;
  int i = 1;
  while(i<=rows){
    int j=1;
    while(j<=i){
      cout<<i<<" " ;
      j=j+1;
    }
    i=i+1;
    cout<<endl;

  }
}