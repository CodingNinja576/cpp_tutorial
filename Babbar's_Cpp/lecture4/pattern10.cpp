#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Please enter the value of n :";
  cin >> n;
  int rows =1;

  while(rows<=n){
    int col=1;
    int value = rows;
    while(col<=rows){
         cout<<value<<" "; // // There is also another method we can appproach this question that is : Instead of storing the starting value in value, we directly calculate i - j + 1, which follows the same pattern.
         value = value -1;
         col = col+1;
    }
    cout<<endl;
     rows=rows+1;
  }
}