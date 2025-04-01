#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;

    if(a-- > 0 && ++b>2){
      cout <<"Stage1 - inside4 If ";
    }
    else{
      cout<<"stage2-inside else";
    }
    cout<< a << " " << b << endl;
  }