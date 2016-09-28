#include "templated_stack_4_1.h"
#include <iostream>

int main(void) {
    Stack<int> myStack;

    const int& one = 1;
    const int& two = 2;
    const int& three = 3;
    const int& four = 4;
    const int& five = 5;

    std::cout << "Stack is empty: " << myStack.empty() << std::endl;

    myStack.push(one);
    std::cout << myStack.top() << std::endl;
    myStack.push(two);
    std::cout << myStack.top() << std::endl;
    myStack.push(three);
    std::cout << myStack.top() << std::endl;
    myStack.push(four);
    std::cout << myStack.top() << std::endl;
    myStack.push(five);
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    
    //std::cout << myStack.top() << std::endl; // error

    myStack.push(five);
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << "Stack is empty: " << myStack.empty() << std::endl;

    return 0;
}
