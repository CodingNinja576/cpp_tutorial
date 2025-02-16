// # 4. Break Keyword
// Challenge:
// Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.
#include <iostream>
#include <string>
using namespace std;
int main(){    
    string response;

    while(true){
        cout << "Do you want more tea (type 'stop' to exit)?: ";
        getline(cin, response);

        if(response == "stop"){
            //exit the loop
            break;
        }
        cout << "Here is your another cup of tea. \n";
    }
    cout << "No more tea will be served to you";
    return 0;
}