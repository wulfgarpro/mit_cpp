#include <gtest/gtest.h>
#include "point_array.h"

class PointArrayTest : public ::testing::Test
{
    protected:
        PointArray* pa;

        virtual void SetUp()
        {      
            pa = new PointArray();
        }

        virtual void TearDown()
        {
            delete pa;
        }
};

TEST_F(PointArrayTest, CanGetSize)
{
    ASSERT_TRUE(pa->get_size() == 1);
}
