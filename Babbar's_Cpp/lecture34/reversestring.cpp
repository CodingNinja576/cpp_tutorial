#include<iostream>
using namespace std;
void reverse(string& s , int i , int j){
  // remember pass by refernce in this function if you pass by value it w
  if(i>j){
    return;
  }
  swap(s[i],s[j]);
  i++;
  j--;
  reverse(s,i ,j);
  
}

int main(){

  string name = "abcde";
  int i = 0;
  int j = 4;
  reverse(name , 0 , name.length()-1);
  cout <<"Reversed string is : "<< name <<endl;

  return 0;
}