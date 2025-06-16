#include<iostream>
using namespace std;

void count(int n ){
  if(n==0){
    return;
  }
  cout << n<<endl;
  count(n-1);

}
int main(){
  
  int n ;
  cout<<"Please input the vaue upto which you want to print counting : "<<endl;
  cin>>n;
  count(n);
  
}