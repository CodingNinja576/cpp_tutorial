#include<iostream>
using namespace std;


//this fun was created by me....

// void swapfun(int array[],int size){
  
  
//   for(int i = 0 , j = 1; ( i<size  && j<size) ; i+=2 , j+=2){
   
//     swap(array[i],array[j]);
//   }
// }

// But this function is more optimistic...

void swapfun(int array[],int size){
  for(int i = 0;i<size;i+=2){
    if(i+1<size){
      swap(array[i],array[i+1]);

    }
  }
}
void printarray(int array[],int size){
  for (int i = 0 ;i<size ; i++){
    cout<<array[i]<<" ";
  }
}
int main(){

  int arr[6]={1,2,3,4,5,6};
  cout<<"Before swapping : "<<endl;
  printarray(arr,6);
  swapfun(arr,6);
  cout<<"After swapping : "<<endl;
  printarray(arr,6);

}
