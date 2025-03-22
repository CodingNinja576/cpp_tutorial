#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;


struct Employee {
  int id;
  string name;
  double salary;


};

void displayEmployee(const Employee& emp){
  cout << "ID: " <<emp.id<< ", Name :"<<emp.name<<" ,salary  $"<<emp.salary<<endl;
  
}

int main()
{
  vector<Employee> employees = { 
    {101,"Divyansh",100000},
    {102,"Pooja",100054},
    {103,"anvik",1003650},
    {101,"Aaradhna",103500},
    {101,"Himano",456730}  
    
  };

  sort( employees.begin() , employees.end() ,[](const Employee& e1 ,const Employee& e2){
    return e1.salary>e2.salary;
  } );

  cout <<"Employees are sorted by salary --> Highest to lowest \n" <<endl;
for_each(employees.begin(),employees.end(),displayEmployee);
vector<Employee> highEarners;
copy_if(employees.begin(),
employees.end(),
 back_inserter(highEarners),
  [](const Employee& e){
  return e.salary > 500000;
} );
cout <<"Employees who are High Earners \n" <<endl;
for_each(employees.begin(),employees.end(),displayEmployee);

double totalsalary = accumulate(employees.begin(),employees .end(), 0.0,[](double sum , const Employee e){
  return sum + e.salary;
}) ;

double averagesalary = totalsalary/ employees.size();

 auto highestPaid = max_element(employees.begin() , employees.end() ,[](const Employee& e1 , const Employee& e2){
  return e1.salary < e2.salary;
});

  return 0;
}
