#include<iostream>
using namespace std;

int getmax(int array[],int n){

  // there are also some predefined function by which we can get max and min value eg::
  int maxi = INT_MIN;
  for (int i = 0 ; i<n;i++){

    maxi = max(maxi,array[i]);
    // if(array[i]>max){
    //   max = array[i];
    // }
    
}
return maxi;
}



  int getmin(int array[],int n){
    int min = INT_MAX;
    for (int i = 0 ; i<n;i++){
      if(array[i]<min){
        min = array[i];
      }
      
    }
    return min;
}


int main(){
  int size;
  cout<<"PLease enter size of array"<<endl;
  cin>>size;
  int num[100];
  for(int i = 0 ; i<size ;i++){
    cin>> num[i];
  }
  cout<<endl;

  cout<<"Max value in Array is : " << getmax( num , size)<<endl;

  cout<<"Min value in Array is : " << getmin( num , size)<<endl;
}