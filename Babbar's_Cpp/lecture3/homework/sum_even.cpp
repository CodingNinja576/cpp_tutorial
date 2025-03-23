#include<iostream>
using namespace std;
int main()
{
  int n;
  int i=1;
  cout<<"please enter the value of n"<<endl;
  cin>>n;
  int sum = 0;
  while(i<=n)
  {
    if(i%2==0){
    sum+=i;
    }
    i=i+1;

  }
  cout<<sum;
}