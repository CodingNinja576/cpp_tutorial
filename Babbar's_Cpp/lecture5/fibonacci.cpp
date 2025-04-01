#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n upto which fibonacci series you want to get printed : ";
  cin>>n;
  int prev = 0;
  cout<< prev << " ";
  int next = 1;
  cout << next << " ";
  for(int i = 1; i<=n ; i++){
   
    int num = prev+next;
    cout << num<<" ";
    prev = next;
    next = num;
  }
}