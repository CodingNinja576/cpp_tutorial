#include<iostream>
using namespace std;
void print(int *p){
   cout<<p<<endl;

  cout<< *p<<endl;
}
void update(int *p){
  p = p+1;
  *p = *p+1;
  cout<<"inside updated function : "<<endl;
  cout<<"after value : "<<*p<<endl;
  cout<<"after address : "<<p<<endl;
  
}

int getsum(int arr[10] /* or we can write it as int *arr  */  ,int n ){
  int sum =0 ;
   // cout<<"size of arr will not be printed as arr passed here is not an array but it is a pointer " <<endl << sizeof(arr)<<endl;
  for(int i = 0 ; i <n ; i++){
    sum+=i[arr];
  }
  return sum;
}


int main(){
//   int value =5;
//   int *p = &value;
// cout<<"before value : "<<*p<<endl;
// cout<<"before address : "<<p<<endl;
//    // print(p);
  

//   update(p);

//   cout<<"in main function : "<<endl;
//   cout<<"after value : "<<*p<<endl;
//   cout<<"after address : "<<p<<endl;

  int arr[10]={1,2,3,4,5,6,7,8,9};
  cout<<"sum is : " << getsum(arr,10)<<endl;
  // as arr is passing as a pointer behind the scenes so its benefit is that we can send part of array we wanted to send to the function
  cout<<"when part of array is passed : "<<endl;
  cout<<"sum is : " <<getsum(arr+3,6);


  return 0;

}