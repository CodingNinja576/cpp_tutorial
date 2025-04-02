#include<iostream>
using namespace std;

int power(){
  int a ;
  int b;
  cout<<"Please enter the values of a and b :"<<endl;;
  cin>>a>>b;
  int ans = 1;
  for(int i = 1 ; i <=b ; i++){
    ans= ans * a;
  }
  return ans;
}
int main(){
  int ans = power();
  cout<<" pow(a,b) : " << ans <<endl;
   ans = power();
  cout<<" pow(a,b) : " << ans <<endl;

   ans = power();
  cout<<" pow(a,b) : " << ans <<endl;



}