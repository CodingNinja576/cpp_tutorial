#include<iostream>
using namespace std;


class Bankaccount    // encapsculation is nothing just is work behind the scene of the code how money deposited how credited and how balance calculated is working in a class backend this is data encapsculation...
{
   private :
            string accountNumber;
            double balance;


    public:
     
            Bankaccount(string accnum , double initialbalance)
            {
                 accountNumber = accnum;
                 balance=initialbalance;
            }
    //getter
    double getBalance() const {
      return balance;
    }
    //Method to deposit money...

    void depositMoney(double amount)
    {
      if(amount >0)
      {
        balance +=amount;
        cout<<"Deposited : "<< amount << endl;

      }else{
        cout<<"Invalid deosit amount";
      }
    }
    
        void withdraw(double amount)
        {
          if(amount>0&&amount<=balance)
          {
            balance -= amount;
          }
          else{
            cout<<"Invalid withdrawn amount"<<endl;
          }
          cout<<balance;
        }     

};
int main()
{
  Bankaccount myaccount("226385755577" , 500);
  myaccount.getBalance();
  myaccount.depositMoney(1000);
  myaccount.getBalance();
  myaccount.withdraw(499);
  myaccount.getBalance();
  return 0;
}