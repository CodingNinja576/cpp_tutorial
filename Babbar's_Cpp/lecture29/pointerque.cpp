#include<iostream>
using namespace std;



int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;    // ye diff print kr dega ki 3 array ka diff hai
  return 0;
}

    
