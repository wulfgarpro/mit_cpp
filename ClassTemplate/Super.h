#ifndef SUPER_H
#define SUPER_H

#include <string>

class Super {    
    public:
        Super();
        Super(int);        
        void greeting();
        // abstract class
        virtual std::string& getWord() = 0;
    protected:
    private:
        int number;
};

#endif

