// C++ Program to demonstrate the declaration and use of a
// void pointer

#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // void pointer holds address of int 'a'
    void* myptr = &a;
    // printing the value of a and adress of a stored in
    // myptr
    cout << "The value of a is: " << a << endl;
    cout << "The Adress of a is  " << myptr << endl;

    //.................................//
    // Initializing multiple variables of different data
    // type
    int n = 10;
    float f = 25.25;
    char c = '$';

    // Initializing a void pointer
    void* ptr;

    ptr = &n; // pointing to int
    cout << "The value of n " << n << endl;
    cout << "The Adress of n " << ptr << endl;

    ptr = &f; // pointing to float
    cout << "The value of n " << f << endl;
    cout << "The Adress of n " << ptr << endl;

    ptr = &c; // pointing to char
    cout << "The value of n " << c << endl;
}