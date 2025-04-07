#include<iostream>
using namespace std;
void printarray(int arr[],int size){
  for (int i = 0; i<size;i++){
    cout<< arr[i]<<" ";
  }
}
int main(){
  int arr[6] = {0,1,2,2,1,0};
  int i =0;
  int n = 6;
  while(i<n-1){
  if(arr[i]==0&&arr[n-1]==0){
    swap(arr[i++],arr[n-1]);
    printarray(arr,6);
    cout << i;
    
  }
  }

}