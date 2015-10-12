#include <string>

class Super {    
    public:
        Super();
        Super(int, std::string&);
        void greeting();
    protected:
    private:
        int       number;
        std::string word;
};
