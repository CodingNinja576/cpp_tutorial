#include<iostream>
using namespace std;
int findpivot(int arr[],int size){
  int start =0;
  int end = size-1;
  int mid = start + (end - start)/2;
  while(start<end){
    if(arr[mid]>=arr[0]){ 
      start = mid+1; // 1st line ki condition
    }
    else{
      end = mid;  // 2nd line ki condition
    }
  }
  return start;
}
int main(){
  int arr[5]={2,8,10,1,3};
  int pivot = findpivot(arr,5);
  cout<<"pivot of the array is "<< pivot<<endl;
}