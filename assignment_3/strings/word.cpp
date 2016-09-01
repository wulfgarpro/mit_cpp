#include "word.h"
#include <string>
#include <algorithm>
#include <iostream>

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
    std::string tmp;

    // 1. move init consonant to end of word (qu is 1 consonsnt)
    char c = this->word[0];
    if(c == 'q' && this->word[1] == 'u') {
        tmp = this->word.substr(2, this->word.length() - 2) + '-';
        tmp += "qu";
    } else {
        tmp = this->word.substr(1, this->word.length() - 1) + '-';
        tmp += c;
    }
    // 2. add an "-ay" to the end of the word
    tmp += "ay";
    return tmp;
};

std::string Word::pigLatinifyVowel() {
    // 1. add way to the end of the word
    return word + '-' + "way";
};

bool Word::isConsonant() {
    char c = this->word[0];
    if(std::find(vowels.begin(), vowels.end(), c) != vowels.end()) return false;
    return true;
};
