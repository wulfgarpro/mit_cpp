#include "word.h"
#include <string>
#include <algorithm>

Word::Word(const std::string word) {
    this->word = word;
}

std::string Word::pigLatinify() {
    // 1. check if we're a consonant word or a vowel word
    bool consonant = isConsonant();
    // 2. call the appropriate helper
    if(consonant) return pigLatinifyConsonant();
    return pigLatinifyVowel();
};

std::string Word::pigLatinifyConsonant() {
    // 1. move init consonant to end of word (qu is 1 consonsnt)
    // 2. add an "ay" to the end of the word
    return NULL;
};

std::string Word::pigLatinifyVowel() {
    // 1. add way to the end of the word
    return NULL;
};

bool Word::isConsonant() {
    char c = this->word[0];
    if(std::find(vowels.begin(), vowels.end(), c) != vowels.end()) return false;
    return true;
};
