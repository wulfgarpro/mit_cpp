#include <string>

class Child : public Super {    
    public:
        Child(int number, std::string& word);
        Child(int number, std::string& word, std::string& otherWord);
    protected:
    private:
        std::string otherWord;
};
