#include<iostream>
using namespace std;

int& func(int a ){
  int num = a;
  int& ans = a;
  return ans;
}
void update2(int& n ){
  n++;
}
void update1(int n ){
  n++;
}
int main(){
  int i = 5;
  //creating a reference variable
  int &j = i;
  cout<<i<<endl;
  i++;
  cout<<i<<endl;
  j++;
  cout<<i<<endl;
  cout<<j<<endl;
  int n =5;
  cout<<"Before : "<<n<<endl;
  update1(n);
  cout<<"After : "<<n <<endl;
  update2(n);
  
  cout<<"After update2 : "<<n <<endl;

func(n); 

/* Bad practice 

int n;
cin>>n;
int arr[n];


*/


  return 0;
}