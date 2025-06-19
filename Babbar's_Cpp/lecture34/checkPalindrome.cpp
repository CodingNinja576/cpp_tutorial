#include<iostream>
using namespace std;
bool checkPalindrome(string& s , int i , int j){
  // remember pass by refernce in this function if you pass by value it will have different result
  if(i>j){
    return true;
  }
  if(s[i]!=s[j])
     return 0;
  else
      return checkPalindrome(s,i+1,j-1);
  
}


int main(){

  string name = "abba";
  // int i = 0;
  // int j = 4;
  bool ans = checkPalindrome(name , 0 , name.length()-1);
  if(ans){
    cout<<"String is Palindrome..."<<endl;
  }
  else{
    cout<<"String is not Palindrome..."<<endl;
  }

  return 0;
}