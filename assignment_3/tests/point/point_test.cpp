#include <gtest/gtest.h>
#include "point.h"

class PointTest : public ::testing::Test {
    protected:
        Point* p;

        void SetUp()
        {      
            p = new Point(5,5);
        }

        void TearDown()
        {
            delete p;
        }
};

TEST_F(PointTest, CanGetX) {
    ASSERT_TRUE(p->getX() == 5);
}

