#include<iostream>
using namespace std;
void isCount(int num){
  for(int i = 1 ; i<= num; i++){
    cout<<i <<" ";
  }
}
int main(){
  int num;
  cout<<"Enter the num "<<endl;
  cin>>num;
  
  isCount(num);

  

}