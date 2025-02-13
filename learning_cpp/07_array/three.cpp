#include<iostream>
using namespace std;
int totalChaiserved(int chai[],int size)
{
  int total =0;
  for(int i =0;i<size;i++)
  {
    total+=chai[i];
  }
  return total;
}
int main()
{
  int chaiserved[7]={50,60,45,58,65,25,95};
  int total = totalChaiserved(chaiserved,7);
  cout<<total;
   

  return 0;
}