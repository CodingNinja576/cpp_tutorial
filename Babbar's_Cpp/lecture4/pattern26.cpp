#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"What is n : ?";
  cin>>n;
  int rows = 1;
  while(rows<=n){
    int space = n-rows;
    while(space){
      cout<<" ";
      space --;
    }
    int num1 = 1;
    
    while(num1<=rows){
      cout<<num1;
      num1++;
      
    }
    int num2 = rows-1;
    while(num2){
      cout<<num2;
      num2--;
    }
    
    cout<<endl;
    rows++;
  }
}