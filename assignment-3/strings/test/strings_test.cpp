#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mock_word.h"
#include "strings.h"

class StringsTest : public ::testing::Test {
    private:
    protected:
        Strings<MockWord>* strings;
    public:
        virtual void SetUp() {
            strings = new Strings<MockWord>();
        };
        virtual void TearDown() {
            delete strings;
        };
};

TEST_F(StringsTest, BasicTest) {
    ASSERT_TRUE(strings != nullptr);
};
