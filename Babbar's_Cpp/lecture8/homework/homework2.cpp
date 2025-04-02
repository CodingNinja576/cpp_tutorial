#include<iostream>
using namespace std;
int main(){
  int amount ;
  cout<<"Please enter the amount : "<<endl;
  cin>>amount;
  int choice ;
  cout<<"Which note you want in max. no : (100 ,50 , 20 ,10)"<<endl;
  cin>>choice;
  switch(choice){
    case 100 : 
    cout << " you will require " << amount/100 << " 100's notes "<<endl;
    break;
    case 50 :
    cout << " You will require " << amount/50 << " 50's notes"<<endl;
    cout<<"you will require " << (amount%50)/20 << " 20 's notes" <<endl;
    cout << "you will require " << ((amount%50)%20)/10 << " 10 's notes" << endl;
    cout<<"you will require " << (((amount%50)%20)%10)/1 << " 1 's notes" <<endl;
    break;
    case 20 : 
    cout<<"you will require " << amount/20 << " 20 's notes" <<endl;
    cout << "you will require " << (amount%20)/10 << " 10 's notes" << endl;
    cout<<"you will require " << (((amount)%20)%10)/1 << " 1 's notes" <<endl;
    break;
    case 10 : 
   
    cout << "you will require " << amount/10 << " 10 's notes" << endl;
    cout<<"you will require " << (amount%10)/1 << " 1 's notes" <<endl;
    break;

    case 1 : 
    cout<<"you will require " << amount/1 << " 1 's notes" <<endl;
    break;
  
    default : 
    cout<< " You have entered the Wrong choice : ";



  }
}

//........................................................................................

// Another method we can use : 
// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
//            }
// }
