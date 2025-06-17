#include<iostream>

using namespace std;

void palindrome(int first , int second , int lock){
  // cout<<first<<" ";
  // cout<<second<<" ";
  int third = first+second ;
  if(third==lock){
    return;
  }
  
  cout<<third;
  first = second ;
  second = third ;
  palindrome(first , second , 21);
  

}

int main(){
  cout<<0<<" ";
  cout<<1<<" ";
  palindrome(0,1 ,21);
}