#include<iostream>
using namespace std;
bool isEven(int num){
  if(num&1){
    return 0;
  }
  return 1;
}
int main(){
  int a;
  cout<<"Please enter the no, you want check "<<endl;
  cin>>a;
  if(isEven(a)){
    cout<<"Entered no is even"<<endl;

  }
  else{
    cout<<"Entered no. is odd"<<endl;
  }

}