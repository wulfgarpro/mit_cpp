#ifndef STRINGS_H
#define STRINGS_H

#include <vector>
#include "word.h"
#include <iostream>
#include <string>
#include <sstream>

template <typename Word>
class Strings {
    private:
        std::vector<Word*>* words = new std::vector<Word*>();
    protected:
    public:
        ~Strings() { delete words; };
        void addWord(Word* word) {
            this->words->push_back(word); 
        };
        std::string latinifyString() const {
            std::ostringstream oss;
            for(Word* w : *words) {
                oss << w->pigLatinify() << " ";
            }
            return oss.str();
        };
};

#endif // STRINGS_H
