#include<iostream>
using namespace std;
bool is_sorted(int arr[],int size){ 
  if(size == 0 || size == 1){
    // array is already sorted return true;
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
  else{
   bool remainingpart=  is_sorted(arr+1,size-1);
   return remainingpart;
  }
}
int main(){
  int arr[5]={1};
  int size = 5;
  
  
  int ans = is_sorted(arr,5);
  if(ans){
    cout<<"Arr is sorted : " <<endl;
  }
  else{
    cout<<"Arr is not sorted :"<<endl;
  }
}