#include<iostream>
using namespace std;
void merge(int *arr , int s , int e){
  int mid = s+(e-s)/2;
  int len1= mid - s +1;
  int len2 = e - mid;
  int *first = new int[len1];
  int *second = new int[len2];
  int k = s;
  for(int i = 0 ; i < len1 ; i++){
    first[i]=arr[k++];
  }

  k = mid+1;
for(int i = 0 ; i < len2; i++){
  second[i]= arr[k++];
}

// merge 2 sorted arrays

int index1= 0;
int index2=0;
k = s;
while(index1<len1 && index2 < len2){
  if(first[index1]<second[index2]){
    arr[k++]= first[index1++];
  }
  else{
    arr[k++]= second[index2++];
  }


}
while(index1<len1){
  arr[k++]= first[index1++];
};
while(index2<len2){
  arr[k++]= second[index2++];
}

delete first;
delete second;


}

void mergeSort(int *arr , int start , int end){
   if(start>=end){
    return;
   }
   int mid = start +(end - start)/2;

   // left part ki sorting
mergeSort(arr,start,mid);
// right part ki sorting
mergeSort(arr,mid+1,end);

  merge(arr ,start ,end);

  
}
int main(){
  int arr[5]={2,6,5,3,7};
  int  n = 5;
  mergeSort(arr,0,n-1);

  for(int i = 0; i < n ; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  
  return 0;
}