#include<iostream>
using namespace std;
bool binarysearch(int *arr , int start,int end , int key){ 
  int mid = start+(end - start)/2;
  if(start>end){
    return false;
  }
  if(arr[mid]== key){
    return true;
  }
  if(arr[mid]<key){
     return binarysearch(arr,mid+1,end,key);
  }
  else{
     return binarysearch(arr,start,mid-1,key);
  }

} 

int main(){
  int arr[5]={2,4,7,6,5};
  int size = 5;
  int key = 11;
  int start = 0;
  int end = size-1;
  
  int ans = binarysearch(arr,start,end ,key);
  if(ans){
    cout<<"Key is present in they array :  " <<endl;
  }
  else{
    cout<<"Key is not present in they array :  "<<endl;
  }
}