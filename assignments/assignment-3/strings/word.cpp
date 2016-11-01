#include "word.h"
#include <string>
#include <algorithm>

Word::Word(const std::string word) {
    this->word_ = word;
}

std::string Word::pigLatinify() {
    // 1. check if we're a consonant word or a vowel word
    bool consonant = isConsonant_();
    // 2. call the appropriate helper
    if(consonant) return pigLatinifyConsonant_();
    return pigLatinifyVowel_();
};

std::string Word::pigLatinifyConsonant_() {
    std::string tmp;

    // 1. move init consonant to end of word (qu is 1 consonsnt)
    char c = this->word_[0];
    if(c == 'q' && this->word_[1] == 'u') {
        tmp = this->word_.substr(2, this->word_.length() - 2) + '-';
        tmp += "qu";
    } else {
        tmp = this->word_.substr(1, this->word_.length() - 1) + '-';
        tmp += c;
    }
    // 2. add an "-ay" to the end of the word
    tmp += "ay";
    return tmp;
};

std::string Word::pigLatinifyVowel_() {
    // 1. add way to the end of the word
    return this->word_ + '-' + "way";
};

bool Word::isConsonant_() {
    char c = this->word_[0];
    if(std::find(vowels.begin(), vowels.end(), c) != vowels.end()) return false;
    return true;
};
