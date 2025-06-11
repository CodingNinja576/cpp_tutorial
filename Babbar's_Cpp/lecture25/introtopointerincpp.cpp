#include<iostream>
using namespace std;
int main(){

  int num = 5;
  cout<<num<<endl;
  // address of the operator -- &
  cout<<"address of the num : " << &num<<endl;
  int *ptr  = &num;
  cout<<"value is when we have not used star : "<< ptr << endl;
  cout<<"value is : "<< *ptr << endl;
  
  double d = 4.6;
  double *pt =  &d;
  cout<<"value is when we have not used star : "<< pt << endl;
  cout<<"value is : "<< *pt << endl;

  //size 

  cout<<"size of integer is :  "<<sizeof( num)<<endl;
  cout<<"size of pointer is :  "<<sizeof( ptr)<<endl;
  cout<<"size of pointer is :  "<<sizeof( pt)<<endl;



  return 0; 
}