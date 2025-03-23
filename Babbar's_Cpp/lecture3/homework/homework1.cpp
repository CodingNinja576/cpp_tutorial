#include<iostream>
using namespace std;
int main(){
  char ch;
  ch = '9';
  if(ch>='a'&&ch<='z')
  {
    cout<<"ch is in lowe case";

  }
  else if(ch>='A'&&ch<='Z')
  {
    cout<<"ch is in uppercase";
  }
  else if(ch>='1'&&ch<='9')
  {
     cout<<"ch is number";
  }
}
