#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the value of n upto which you want to get sum printed :"<<endl;
 cin>>n;
 int sum = 0;
 for(int i =1;i<=n;i++){
  sum+=i;
 } 
 cout<<"Sum from 1 to n is : "<<sum;
}