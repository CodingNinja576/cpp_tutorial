#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"What is n : ?";
  cin>>n;
  int rows = 1;
  
  while(rows<=n){
    int value = 1;
    int col1=n-rows+1;
   
    while(col1){
      cout<<value;
      value++;
      col1--;
    }
    int colm2 = rows-1;
    
    while(colm2){
      cout<<'*';
      colm2--;
    }

    int colm3 = rows -1;
    while(colm3){
      cout<<'*';
      colm3--;
    }
    int colm4=n-rows+1;
    int value2=5;
    while(colm4){
      cout<<colm4;
      colm4--;
      value2--;
    }
    
    cout<<endl;
    rows++;
  }
}