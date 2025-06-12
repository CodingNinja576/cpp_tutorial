#include<iostream>
using namespace std;
int main(){

  int arr[5]={1,2,3,4,5};
  char ch[6]="abcde";
  // for num array its pointer will print location of first block
  cout<<arr<<endl;
  cout<<ch<<endl;
  char *c = &ch[0];
  // for char array its pointer will  not print location it will print whole array...
  cout<<c<<endl;


  char temp = 'z';
  char *p = &temp;
  cout<<p<<endl;



  
  return 0;
}