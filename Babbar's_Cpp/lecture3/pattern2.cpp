#include<iostream>
using namespace std;
int main(){
  int n =3;
  int i = 1;
  while(i<=n)
  {
    int j =1;
    while(j<=n){
      cout <<i<<" ";
      j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}