#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Please enter the negative no : "<<endl;
  cin>>n;
  int pos = -n;
  float ans = 0;
  int i = 0;
  while(pos!=0){
    int bit = (pos&1);
    if(bit==1){
      bit=0;
    } else if(bit==0){
      bit =1;
    }
    ans = (bit*pow(10,i))+ans;
    i++;
    pos=pos>>1;
    

  }
  cout<<ans;
  


 
}