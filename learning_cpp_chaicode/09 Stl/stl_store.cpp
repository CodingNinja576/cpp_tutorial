#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<map>
#include<string>
#include<set>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product{
       int productID;
       string name;
       string category;
};

struct Order{
  int OrderID;
  int ProductID;
  int quantity;
  string customerID;
  time_t orderdate;


};

int main()
{
  vector<Product> products = {
    {101,"Laptop","Electronics"},
    {102,"Smaprtphone","Electronics"},
    {103,"Coffe Maker","kitchen"},
    {104,"Blender","Kitchen"},
    {105,"desklamp","home"}

  };

  deque<string> recentcustomers = {"C001","C002","C003"};
  recentcustomers.push_back("C004");
  recentcustomers.push_front("C005");

  list<Order> orderhistory;

  
  orderhistory.push_back({1,101,1,"C001",time(0)});
  orderhistory.push_back({2,102,2,"C002",time(0)});
  orderhistory.push_back({3,103,1,"C003",time(0)});

  set<string> categories;
  for(const auto &product : products){
    categories.insert(product.category);

  }

  map<int,int> productStock = {
    {101,10},
    {102,9},
    {103,11},
    {104,5},
    {106,7},

  };

  multimap<string,Order > customerOrders;
  for(const auto &order : orderhistory){
    customerOrders.insert({order.customerID,order});

  }
  unordered_map<string,string> customerData={
     {"C001","Alice"},
     {"C002","Histesh"},
     {"C003","Max"},
     {"C004","Herry"},
     {"C005","Vidya"}


  };

  unordered_set<int> uniqueProductIDs;
  for(const auto &product : products)
{
  uniqueProductIDs.insert(product.productID);
}

  return 0;
}