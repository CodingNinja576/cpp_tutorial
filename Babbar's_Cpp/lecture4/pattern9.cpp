#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no. of rows :"<<endl;
  cin>>n;
  int rows = 1;
  while(rows<=n){
    int colm =1;
    int value = rows;   // There is also another method we can appproach this question that is : Instead of storing the starting value in value, we directly calculate i + j - 1, which follows the same pattern.
    while(colm<=rows){
      cout<<value<<" ";
      value =value+1;
      colm++;
    }
    rows++;
    cout<<endl;
  }
}