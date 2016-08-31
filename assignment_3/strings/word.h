#ifndef WORD_H
#define WORD_H

#include <string>

class Word {
    public:
        Word(std::string word);
        std::string pigLatinify(void);
    protected:
    private:
        std::string word;
        enum class VOWELS {
            a,A, e,E, i,I, o,O, u,U
        } vowels;
};

#endif // WORD_H
