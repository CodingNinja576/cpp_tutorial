#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int k){ 
  if(size == 0 ){
    
    return false;
  }
  if(arr[0]==k){
    return true;
  }
  else{
   bool remainingpart=  linearsearch(arr+1,size-1,k);
   return remainingpart;
  }
}
int main(){
  int arr[5]={2,4,7,6,5};
  int size = 5;
  int key = 2;
  
  int ans = linearsearch(arr,size,key);
  if(ans){
    cout<<"Key is present in they array :  " <<endl;
  }
  else{
    cout<<"Key is not present in they array :  "<<endl;
  }
}