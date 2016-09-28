#include <vector>

template<typename T>
class Stack {
    public:
        bool empty();
        void push(const T &item);
        T& top();
        void pop();
        Stack() { stack = new std::vector<T>(); };
        ~Stack() { delete stack; };
    protected:
    private:
        std::vector<T> stack;
};
