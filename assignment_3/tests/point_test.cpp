#include <gtest/gtest.h>
#include "point.h"

class PointTest : public ::testing::Test {
    protected:
        Point* p;

        virtual void SetUp()
        {      
            p = new Point(5,5);
        }

        virtual void TearDown()
        {
            delete p;
        }
};

TEST_F(PointTest, CatGetX) {
    ASSERT_TRUE(p->getX() == 5);
}

