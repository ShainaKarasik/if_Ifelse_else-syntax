#include <iostream>

// If_If Else_If statments with or without boolean expressions!
// Lets use these if - if else - else statments to determine what we want to happen if the boolean expression turns out to be true
// and we have even integer as the value for num, and what'd like to happn if they are false and the num integer variable is odd
//our main function, or entry point:
int main() {
    int num = 10;

    if (num % 2 == 0) { 
        std::cout << "Even" << std::endl;
 }
    else if (num % 2 == 1) {
        std::cout << "Odd" << std::endl;
 }
    else {
        std::cout << "Invalid" << std::endl;
}
    return 0;
}
