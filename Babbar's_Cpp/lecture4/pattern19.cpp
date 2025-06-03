#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input the value of n : ";
  cin>>n;
  int rows= 1;
 
  while(rows<=n){
    int space = n-rows;
    
      while(space){
        cout<<" ";
        space--;
        
      }
      int colm = 1;
      while(colm<=rows){
        cout<<"*";
        colm++;
      }
      cout<<endl;
      rows++;
      
      
  }
  
}