#include "word.h"
#include <string>

Word::Word(std::string word) {
    this->word = word;
}

std::string Word::pigLatinify(void) {
    // 1. check if we're a consonant word or a vowel word
    // 2. call the appropriate helper
    return NULL;
};

std::string Word::pigLatinifyConsonant(std::string word) {
    // 1. move init consonant to end of word (qu is 1 consonsnt)
    // 2. add an "ay" to the end of the word
    return NULL;
};

std::string Word::pigLatinifyVowel(std::string word) {
    // 1. add way to the end of the word
    return NULL;
};
