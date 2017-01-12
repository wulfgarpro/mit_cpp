#include "word.h"
#include "strings.h"

int main(void) {
    Word w1("beast");
    Word w2("dough");
    Word w3("happy");
    Word w4("question");

    Strings<Word>* strings = new Strings<Word>();
    strings->makeWord(w1);
    strings->makeWord(w2);
    strings->makeWord(w3);
    strings->makeWord(w4);

    strings->latinifyWords();
    return 0;
}
