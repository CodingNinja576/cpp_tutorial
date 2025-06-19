#include<iostream>
using namespace std;

int partition(int arr[],int s, int e){
    
  int pivot = arr[s];

  int cnt=0;
  for(int i = s+1 ; i <=e ;i++){
    if(arr[i]<=pivot){
      cnt++;
    }
  }
  // swap to right place
  int pivotindex = s+cnt ;
  swap(arr[s],arr[pivotindex]);

  // now ab left ans right part mein value thik se rkhni hai...
int i = s ;
int j = e ;
  while( i < pivotindex && j > pivotindex){
    while(arr[i]< pivot)
    {
      i++;
    }
    while(arr[j]>pivot){
      j--;
    }
    if(i<pivotindex && j>pivotindex){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }

  }
  return pivotindex;
}
void quickSort(int arr[],int s , int e){
  // base case 
  if(s>=e){
    return ;
  }

  //
  int p = partition(arr , s , e);

  // sorting left & right part
  quickSort(arr,s,p-1);
  quickSort(arr , p+1 ,e);
}
int main(){
  int arr[5]={1,9,2,7,6};
  int n = 5;
  quickSort(arr,0,n-1);
  for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}