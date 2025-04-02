#include<iostream>
using namespace std;
int main(){
  int a , b;
  cout<<"Enter the values of a and b "<<endl;
  cin>>a>>b;
  char op;
  cout<<"please enter the operation you wnat to get pertformed :" <<endl;
  cin>>op;
  switch(op){
    case '+' :
    cout<<a+b<<endl;

    break;

    case '-' :
    cout<<a-b<<endl;
    
    break;

    case '*':
    cout<<a*b<<endl;

    
    break;

    case '/' :
    cout<<a/b<<endl;
    
    break;

    case '%' :
    cout <<a%b<<endl;
    
    default:
    cout<<"You have entered the wrong choice : "<<endl;
  }
}