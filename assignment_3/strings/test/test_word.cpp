#include "gtest/gtest.h"
#include "word.h"

class WordTest : public ::testing::Test {
    protected:
        Word* word1;
        Word* word2;
        Word* word3;
        Word* word4;
    public:
        virtual void SetUp() { 
            word1 = new Word("beast"); 
            word2 = new Word("dough"); 
            word3 = new Word("happy"); 
            word4 = new Word("question"); 
        }
        virtual void TearDown() { 
            delete word1; 
            delete word2; 
            delete word3; 
            delete word4; 
        } 
};

TEST_F(WordTest, WordIsSetCorrectlyAndCanBeRetrieved) {
    ASSERT_EQ(word1->getWord(), "beast");
    ASSERT_EQ(word2->getWord(), "dough");
    ASSERT_EQ(word3->getWord(), "happy");
    ASSERT_EQ(word4->getWord(), "question");
};

TEST_F(WordTest, WordWithConsonantIsPiggedProperly) {
    ASSERT_EQ(word1->pigLatinify(), "east-bay");
    ASSERT_EQ(word2->pigLatinify(), "ough-day");
    ASSERT_EQ(word3->pigLatinify(), "appy-hay");
    ASSERT_EQ(word4->pigLatinify(), "estion-quay");
};

TEST_F(WordTest, WordWithVowelIsPiggedProperly) {
    delete word1, delete word2, delete word3, delete word4;
    word1 = new Word("opal");
    word2 = new Word("richy");
    word3 = new Word("asshole");
    word4 = new Word("snakey");

    ASSERT_EQ(word1->pigLatinify(),     "opal-way");
    ASSERT_EQ(word2->pigLatinify(),    "richy-way");
    ASSERT_EQ(word3->pigLatinify(),  "asshole-way");
    ASSERT_EQ(word4->pigLatinify(),   "snakey-way");
};
