#include "templated_stack_4_1.h"
#include <iostream>

template<typename T>
void addToStack(Stack<T>& s) {
}

int main(void) {
    Stack<int> myStack;
    std::cout << "Stack is empty: " << myStack.empty() << std::endl;
    // Add to stack
    s.push(1);
    std::cout << s.top() << std::endl;
    s.push(2);
    std::cout << s.top() << std::endl;
    s.push(3);
    std::cout << s.top() << std::endl;
    s.push(4);
    std::cout << s.top() << std::endl;
    s.push(5);
    std::cout << s.top() << std::endl;

    // Pop from stack
    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;
    myStack.pop();
    std::cout << myStack.top() << std::endl;

    // ... and some more
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    //std::cout << myStack.top() << std::endl; // error be design when empty

    // Just add 1 item back to stack
    myStack.push(1);
    std::cout << myStack.top() << std::endl;

    // Now take it away
    myStack.pop();
    std::cout << "Stack is empty: " << myStack.empty() << std::endl;

    // Add to stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Create a second stack for + overload
    Stack<int> myStackB;
    myStackB.push(1);
    myStackB.push(2);
    myStackB.push(3);
    myStackB.push(4);
    myStackB.push(5);

    // testing + operator overload
    Stack<int> super = myStack + myStackB;        
    return 0;
}
