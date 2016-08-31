#ifndef WORD_H
#define WORD_H

#include <string>

class Word {
    public:
        Word(std::string word);
        std::string pigLatinify(void);
        std::string getWord() { return word; }
    protected:
    private:
        std::string word;
        enum class VOWELS {
            a,A, e,E, i,I, o,O, u,U
        } vowels;
        std::string pigLatinifyConsonant(std::string word);
        std::string pigLatinifyVowel(std::string word);
};

#endif // WORD_H
