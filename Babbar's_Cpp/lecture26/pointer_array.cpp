#include<iostream>
using namespace std;
int main(){
/*
int arr[10] = {2,5,6};
cout<<"address of first memory location : "<< arr <<endl;

cout<<"address of first memory location : "<< &arr[0] <<endl;
cout<<"value at first memory block : "<<*arr<<endl;
cout<<"value at first memory block : "<<*(arr+0)<<endl;
cout<<"adding 1 to value at first at memory block "<<*arr+1<<endl;
cout<<"adding 1 to value at first at memory block "<<(*arr)+1<<endl;
// there is differenc b/w these commands

cout<<"value at second memory block : "<<*(arr+1)<<endl;
cout<<"value at second memory block : "<<1[arr]<<endl;
cout<<"value at third memory block : "<<*(arr+2)<<endl;
cout<<"value at third memory block : "<<2[arr]<<endl;
// cout<<"value at second memory block : "<<*arr[1]<<endl;  --> this will not work because arr is pointer only for first block for finding the value at second memory block you can find by *(arr+1);


int temp[10];
cout<<"size of temp : "<<sizeof(temp)<<endl;
cout<<"size of *temp : "<<sizeof(*temp)<<endl;
cout<<"size of &temp : "<<sizeof(&temp)<<endl;





int *ptr = &temp[0];
cout<<"size of ptr : "<< sizeof(ptr)<<endl;
cout<<"size of *ptr : "<< sizeof(*ptr)<<endl;
cout<<"size of &ptr : "<< sizeof(&ptr)<<endl;
*/

// int a[20]={2,3,5};

// cout<<&a[0]<<endl;
// cout<<&a[1]<<endl;
// cout<<&a[2]<<endl;
// cout<<&a<<endl;
// cout<<a<<endl;

// int *p = &a[0];
// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<&p<<endl;

int arr[10];
int *ptr = &arr[0];
cout<<"before : "<<ptr<<endl;
ptr = ptr +1;
cout<<"after : "<<ptr<<endl;







  return 0 ;
}