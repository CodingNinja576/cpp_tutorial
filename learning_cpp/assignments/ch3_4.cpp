// **Challenge 4: Switch Case**\
//    Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.
#include<iostream>
using namespace std;
int main()
{
  int choice;
  cout<<" *******Menu********\n1---->Boiling\n2----->steeping\n3----->Iced tea"<<endl;
  cout<<"Please enter you choice\n";
  cin>>choice;
  switch(choice)
  {
    case 1 :
    cout<<"you have selected Brewing";
    break;
    
    case 2:
    cout<<"you have selected Steeping";
    break;
    
    case 3 :
    cout<<"you have selected Iced tea";
    break;
    default:
    cout<<"You have entered an wrong choice\n";
  }
  return 0;
}