#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mock_word.h"
#include "strings.h"
#include <string>

using ::testing::AtLeast;
using ::testing::Return;

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

TEST_F(StringsTest, StringIsAllPigLatinifiedNicely) {
    MockWord mockWordA("beast");
    MockWord mockWordB("dough");

    // Set some expectations for the Mock
    //EXPECT_CALL(mockWordA, pigLatinify()).Times(AtLeast(1)); 
    //EXPECT_CALL(mockWordB, pigLatinify()).Times(AtLeast(1)); 
    EXPECT_CALL(mockWordA, pigLatinify()).WillOnce(Return("east-bay")); // infers Times
    EXPECT_CALL(mockWordB, pigLatinify()).WillOnce(Return("ough-day")); // and again...

    strings->addWord(&mockWordA);
    strings->addWord(&mockWordB);

    std::string pigLatin = strings->latinifyString();
    ASSERT_EQ(pigLatin, "east-bay ough-day ");
};
