#include "gtest/gtest.h"

class WordTest : public ::testing::Test {
};

TEST_F(WordTest, BasicTest) {
    ASSERT_TRUE(1==1);
};

