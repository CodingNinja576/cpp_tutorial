#include<iostream>
using namespace std;
int main()
{
  float f = 1.23;
  bool b1 = true;
  bool b2 = false;
  int a = 6;
  double d = 7.895;
  int size1 = sizeof(f);
  int size2 = sizeof(b1);
  int size3 = sizeof(b2);
  int size4 = sizeof(a);
  int size5 = sizeof(d);
  cout<<"size of f "<< size1 <<endl;
  cout<<"size of b1"<< size2 <<endl;
  cout<<"size of b2 "<< size3 <<endl;
  cout<<"size of a "<< size4 <<endl;
  cout<<"size of d "<< size5 <<endl;

}