#include<iostream>
using namespace std;
int main(){
  int n=5;
  int trophy = 0;
  int loyalfollowers= 1;
  int i = 1;
  cout<<"................................R.C.B KA SCENERIO................................."<<endl;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<" Loyal followers = "<<loyalfollowers<<" Lakh -->> "<<" Trophy = "<<trophy;
      loyalfollowers++;
      j++;
    }
    i++;
    cout<<endl;

  }

}