#include<iostream>
using namespace std;
int main(){
  cout<<"This is *c to F table :"<<endl;
  float c;
  float f;
  c=0;
  while(c<=100)
  {
    f = (c*9/5)+32;
    cout<<c<<"c="<<f<<"F"<<endl;
    c=c+1;
  }
}