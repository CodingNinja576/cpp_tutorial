#include<iostream>
using namespace std;
int apterm(){ 
  int n;
  cout << "Enter the nth term you wa-nt of A.P --> ((3*n)+7 ) : " << endl;
  cin>>n;
  int ans = ((3*n)+7 );
  return ans;

}

int main(){

  int ans = apterm();
  cout<< "Nth term of AP is : " << ans << endl;
  
  
  

}