#include<iostream>
using namespace std;

int sum(int array[],int size){
  int sum = 0;
  for ( int i = 0; i<size;i++){
    sum +=array[i];
  }
  return sum;
}
int main(){
int size;
cout << " Please enter the size of array : "<< endl;
cin>>size;

int test[100];
for(int i = 0; i<size;i++){
  cin>>test[i];

}
int ans = sum(test,size);
cout<<"Sum of elements of array is : "<<ans<<endl;

}