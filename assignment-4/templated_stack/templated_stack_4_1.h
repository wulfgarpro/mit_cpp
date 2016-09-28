#include <vector>
#include <iostream>

template<typename T>
class Stack {
    public:
        Stack() { std::cout << "constructing stack" << std::endl; stack = new std::vector<T>(); };
        ~Stack() { delete stack; };

        bool empty() {
            if(stack->empty()) return true;
            return false; 
        };

        void push(const T &item) {
            stack->insert(stack->begin(), item);
        };

        T& top() {
            return stack->front();
        };

        void pop() {
            if(!empty()) {
                stack->erase(stack->begin());
                stack->shrink_to_fit();
            }
        };

    protected:

    private:
        std::vector<T>* stack;
};
