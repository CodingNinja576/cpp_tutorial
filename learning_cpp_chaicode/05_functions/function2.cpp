#include<iostream>
using namespace std;
void pourchai(int cups){
  cups =cups+5;
  cout<<"poured chai : "<<cups<<endl;
}

int main()
{
  int chaicups =2;
  pourchai(chaicups);
  cout<<"Total cups are "<< chaicups<<endl;          //call by value...........




  return 0;
}