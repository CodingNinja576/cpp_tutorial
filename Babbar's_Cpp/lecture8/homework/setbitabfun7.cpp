#include<iostream>
using namespace std;
// setr bit means 1 mtl kitni 1 bit hain vo count krni hai dono mein
int setbit(int a,int b){
  cout<<"Enter no. a and no. b "<<endl;
  cin>>a>>b;
  int digit = 0;
  while(a!=0){
    if(a&1==1){
      digit++;
    }
    a=a>>1;
  }
  while(b!=0){
    if(b&1==1){
      digit++;
    }
    b=b>>1;
  }
  return digit;
}
int main(){
        int a,b;
        int ans = setbit( a , b );
        cout<<"set bit in a and b are : " << ans << endl;

        
}