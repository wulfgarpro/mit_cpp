#ifndef WORD_H
#define WORD_H

#include <string>
#include <vector>

static const char theVowels[] = {'a','e','i','o','u'};
static const std::vector<char> vowels (theVowels, theVowels + sizeof(theVowels) / sizeof(theVowels[0]));

class Word {
    public:
        Word(std::string word);
        virtual ~Word() {};
        virtual std::string pigLatinify(void);
        std::string getWord() { return word_; }
    protected:
    private:
        std::string word_;
        std::string pigLatinifyConsonant_();
        std::string pigLatinifyVowel_();
        bool isConsonant_();
};

#endif // WORD_H
