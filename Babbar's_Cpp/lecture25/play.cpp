#include<iostream>
using namespace std;
int main(){
   // pointer to int is created and po inting to a garbage value
  // int *p = 0;
  // cout << *p ;
  int num = 5;
  int a = num;
  a++;

  cout<<num<<endl;
  int *p = &num;
  cout<<"before : "<< num << endl;
  (*p)++;
  cout<<"after : " << num<<endl;

  int i = 3;
  int *t = &i;
  *t = *t+1;
  cout<<*t<<endl;
  cout<<" before : t "<<t<< endl;
  t=t+1;
  
  
 cout<< "t"<<t<<endl;



  return 0; 
}