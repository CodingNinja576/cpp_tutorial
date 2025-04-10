#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
  int start = 0;
  int end = size-1;
  int mid = start + (end - start)/2; // iska reason notes mein se smjh lena

  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    if(key > arr[mid]){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
    // mid= (start+end)/2;
    mid = start + (end - start)/2;

  
  }
  return -1;
}
int main(){
  int even[6]={1,2,3,4,5,45};
  int odd[5]={2,3,4,56,78};

  int evenindex = search(even,6,45);
  cout<<" Index of key provided is "<<evenindex<<endl;
}