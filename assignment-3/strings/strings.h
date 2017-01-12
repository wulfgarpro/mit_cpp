#ifndef STRINGS_H
#define STRINGS_H

#include <vector>
#include "word.h"
#include <iostream>

template <typename Word>
class Strings {
    private:
        std::vector<Word>* words = new std::vector<Word>();
    protected:
    public:
        ~Strings() {};
        void makeWord(const Word word) {
            this->words->push_back(word); 
        };
        void latinifyWords() const {
            for(Word w : *words) {
                std::cout << w.pigLatinify() << std::endl;
            }
        };
};

#endif // STRINGS_H
