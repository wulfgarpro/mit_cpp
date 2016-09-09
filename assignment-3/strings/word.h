#ifndef WORD_H
#define WORD_H

#include <string>
#include <vector>

static const char theVowels[] = {'a','e','i','o','u'};
static const std::vector<char> vowels (theVowels, theVowels + sizeof(theVowels) / sizeof(theVowels[0]));

class Word {
    public:
        Word(std::string word);
        std::string pigLatinify(void);
        std::string getWord() { return word; }
    protected:
    private:
        std::string word;
        std::string pigLatinifyConsonant();
        std::string pigLatinifyVowel();
        bool isConsonant();
};

#endif // WORD_H
