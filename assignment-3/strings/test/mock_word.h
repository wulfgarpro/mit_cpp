#include "gmock/gmock.h"
#include "word.h"
#include <string>

class MockWord : Word {
    public:
        MOCK_METHOD0(pigLatinify, std::string(void));
};
