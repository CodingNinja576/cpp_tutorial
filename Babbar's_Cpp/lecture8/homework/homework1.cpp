// agr hmney kisi infinite loop ke andr switch case lga diya hai to loop se kaisey bahar niklengey

// exit(0) is a function provided by the C/C++ standard library (declared in <stdlib.h> in C or <cstdlib> in C++) that terminates the program immediately. The argument 0 typically indicates a successful or normal termination of the program.

// Usage in a Program:
// Immediate Program Termination:
// You can call exit(0) anywhere in your code (inside loops, functions, etc.) to stop the program right away. For example, inside a switch-case or loop, if a certain condition is met and you want to end the entire program, you can do:


// #include <cstdlib>  // or <stdlib.h> in C

// int main() {
//     while (true) {
//         int choice;
//         // Assume input is taken for 'choice'
//         switch (choice) {
//             case 1:
//                 // Do something
//                 break;
//             case 2:
//                 // Do something else
//                 break;
//             case 3:
//                 // Terminate the program
//                 exit(0);
//             default:
//                 break;
//         }
//     }
//     return 0;
// }

// Notes:

// Cleanup: When you call exit(0), destructors for global and static objects are called, but local objects with automatic storage duration are not destroyed.

// Alternative in C++: In C++, it's often preferable to allow main() to return normally, or to throw exceptions that you catch in main(), ensuring proper resource cleanup.

// Exit Status: The number passed to exit() can be any integer. Conventionally, 0 means success and any non-zero value indicates an error.

// In summary, use exit(0) when you need to immediately stop program execution, ensuring that you handle any necessary cleanup if required.