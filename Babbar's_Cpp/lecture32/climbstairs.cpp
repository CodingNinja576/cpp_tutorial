#include<iostream>
using namespace std;
void reachHome(int source , int destination){
  
  cout<<"You are here : "<<source<<"\tYou have to reach :"<<destination<<endl;
  
  // Base case

  if(source==destination){
    cout<<"Pahunch gya bahi : "<<endl;
    return; // return statement is mandatory in base case... 
  }

  // processing 
  source++;

  // recursive call

  reachHome(source , destination);

}
int main(){
  int destination = 20 ;
  int source = 1;
  reachHome(source,destination);
}