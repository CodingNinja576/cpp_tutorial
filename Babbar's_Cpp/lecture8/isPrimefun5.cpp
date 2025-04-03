#include<iostream>
using namespace std;

bool isPrime(int num){

  for(int i = 2 ; i < num ;i++){
    if(num%i==0){
      return 0;
    }

  }
  return 1;
}
int main(){
       
   int num;
   cout<<" Enter the number : to check "<<endl;
   cin>>num;

   if(isPrime(num)){
    cout<<"Entered no. is prime "<<endl;

   }
   else{
    cout<<"Entered no is not prime"<<endl;
   }
}