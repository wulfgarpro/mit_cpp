#ifndef TEMPLATED_STACK_H
#define TEMPLATED_STACK_H

#include <vector>
#include <iostream>

/*
 * These forward decs are required when telling the compiler
 * about non-member, friend operator overloads.
 *
 * --- */
template<typename T>
class Stack;

template<typename T>
Stack<T> operator+ (const Stack<T>& a, const Stack<T>& b);
/* --- */

template<typename T>
class Stack {
    public:
        Stack() : stack(new std::vector<T>()) {};
        //~Stack() { delete stack; };

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

/*
 * A non-member friend implementation for operator overloading
 * is useful when the default ordering of operators when using
 * a member overload is not suited.
 *
 * That is, if we have:
 *      T c = a + b;
 *
 * The compiler does:
 *      c = a.operator+(b)
 *      
 * Which means it's not possible to do:
 *      c = b.operator(a) // if b is not of type a
 * For instance, if b is of type int, and a is a user-type, you can't overload the 
 * + operator for int using a member function, you have to do it non-member.
 *
 * Hence this example.
 */
template<typename T>
Stack<T> operator+(const Stack<T>& a, const Stack<T>& b) {
    Stack<T> super;
    for(T item : *(a.stack)) {
        std::cout << "Inserting into super: " << item << std::endl;
        super.push(item);
    }
    for(T item : *(b.stack)) {
        std::cout << "Inserting into super: " << item << std::endl;
        super.push(item);
    }
    return super;
};

#endif // TEMPLATED_STACK_H
