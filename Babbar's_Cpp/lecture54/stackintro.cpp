#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int> s;
    s.push(4);
    s.push(543);
    s.push(435);
    s.pop();
    
    cout<<"printing top element :"<<s.top()<<endl;
    // cout<<"is empty :"s.empty()<<endl;
   if(s.empty()){
    cout<<"stack is empty :"<<endl;
   }else{
    cout<<"stack is not empty  "<<endl;
   }

   cout<<"size of stack is :"<<s.size()<<endl;
}