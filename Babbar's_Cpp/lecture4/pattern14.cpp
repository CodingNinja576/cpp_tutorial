#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Input the value of n : ";
  cin>>n;
  int row =1;
  char ch = 'A';
  
  while(row<=n){
    char value = ch;
    int col =1;
    while(col <=n){
      cout<<value<<" "; // this approach is good but you can also solve it by another approach by formula method formula herte used will be ('A' +i+j-2);+
      
      value++;
      col++;

    }
    cout<<endl;
    row++;
    ch++;
  }
}