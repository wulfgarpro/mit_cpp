#ifndef CHILD_H
#define CHILD_H

#include <string>

class Child : public Super {    
    public:
        Child(int number, std::string& word);
        std::string& getWord();
    protected:
    private:
        std::string& word;
};

#endif

