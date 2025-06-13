#include<iostream>
using namespace std;
int main(){
  int row;
  cin>>row;
int column;
cin>>column;

  int** arr = new int*[row];
  for(int i = 0; i<row ;i++){
    arr[i]=new int[column];
  }

  for(int i = 0; i < row ;i++){
    for(int j = 0 ; j < column ; j++){
      cin >> arr[i][j];
    }
  }
  cout << endl;

   for(int i = 0; i < row ;i++){
    for(int j = 0 ; j < column ; j++){
      cout << arr[i][j] << " ";
    }
    cout<<endl;
  }

  


  return 0;
}