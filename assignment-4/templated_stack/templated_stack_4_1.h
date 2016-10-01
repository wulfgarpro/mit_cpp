#ifndef TEMPLATED_STACK_H
#define TEMPLATED_STACK_H

#include <vector>
#include <iostream>

template<typename T>
class Stack;

template<typename T>
Stack<T> operator+ (const Stack<T>& a, const Stack<T>& b);

template<typename T>
class Stack {
    public:
        Stack() : stack(new std::vector<T>()) {};
        ~Stack() { delete stack; };

        bool empty() {
            if(stack->empty()) return true;
            return false; 
        };
        void push(const T &item) {
            stack->insert(stack->begin(), item);
        };

        T& top() { return stack->front(); };

        void pop() {
            if(!empty()) {
                stack->erase(stack->begin());
                stack->shrink_to_fit();
            }
        };

        friend Stack operator+ <>(const Stack&, const Stack&);
    protected:
    private:
        std::vector<T>* stack;
};

template<typename T>
Stack<T> operator+(const Stack<T>& a, const Stack<T>& b) {
    Stack<T> s;
    std::vector<T> tmp = *(b.stack);
    decltype typedef typename std::vector<T>::iterator it = tmp.begin();

    /*for(it = b.stack->begin(); it != b.stack->end(); it++) {

    }*/

    std::cout << a.stack->size() << std::endl;
    std::cout << b.stack->size() << std::endl;
    return s; 
};

#endif // TEMPLATED_STACK_H
