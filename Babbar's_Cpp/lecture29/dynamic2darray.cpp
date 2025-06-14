#include<iostream>
using namespace std;
int main(){
  int row;
  cin>>row;
int column;
cin>>column;

// creating a 2D array 
  int** arr = new int*[row];
  for(int i = 0; i<row ;i++){
    arr[i]=new int[column];
  }

  // Taking input 
  for(int i = 0; i < row ;i++){
    for(int j = 0 ; j < column ; j++){
      cin >> arr[i][j];
    }
  }
  cout << endl;

  // Taking output 
   for(int i = 0; i < row ;i++){
    for(int j = 0 ; j < column ; j++){
      cout << arr[i][j] << " ";
    }
    cout<<endl;
  }

  // Releasing memory........
  
  for(int i = 0 ; i < row ; i ++){
    delete [] arr[i];
  }

  delete []arr;
  


  return 0;
}