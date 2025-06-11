#include<iostream>
using namespace std;
int main(){

int arr[10] = {2,5,6};
cout<<"address of first memory location : "<< arr <<endl;

cout<<"address of first memory location : "<< &arr[0] <<endl;
cout<<"value at first memory block : "<<*arr<<endl;
cout<<"value at second memory block : "<<*arr+3<<endl;
cout<<"value at second memory block : "<<*(arr+1)<<endl;





  return 0 ;
}