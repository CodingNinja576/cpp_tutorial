// ### 3. **Relational Operators**

// ### **Challenge:** A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

// > > , >=, <, <=

#include<iostream>
using namespace std;
int main()
{
  
 int teacup;
 cout<<"Welcome ! to Sharma ji's Tea shop " <<endl;
 cout<<"How many Teacup's You have buyed ? "<<endl;
 cin >>teacup;
if(teacup>=20)
{
  cout<< "Congratulations! You have got \"Gold\" badge ";
}
else if(teacup >=10 && teacup <20)
{
  cout<< "Congratulations! You have got \"Silver\" badge ";

}
else{
  cout<<"Buy more teabags to be our Loyality program customer";
}



  
  return 0;



}