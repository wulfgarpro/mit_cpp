#ifndef MOCK_WORD_H
#define MOCK_WORD_H

#include "gmock/gmock.h"
#include "word.h"
#include <string>
#include <iostream>

class MockWord : public Word {
    public:
        MockWord(const std::string word) : Word(word) {};
        MOCK_METHOD0(pigLatinify, std::string(void));
};

#endif // MOCK_WORD_H
