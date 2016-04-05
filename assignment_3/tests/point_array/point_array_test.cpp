#include <gtest/gtest.h>
#include "point_array.h"

class PointArrayTest : public ::testing::Test {
    protected:
        PointArray* pa;

        virtual void SetUp()
        {      
            pa = new PointArray();
        }

        virtual void TearDown()
        {
            //delete pa;
        }
};

/*TEST_F(PointArrayTest, CanGetSize) {
    ASSERT_TRUE(pa->get_size() == 0);
}*/

/*TEST_F(PointArrayTest, CanResize) {
    ASSERT_TRUE(pa->get_size() == 0);
}*/

TEST_F(PointArrayTest, CanInsertPoint) {
    ASSERT_TRUE(pa->get_size() == 0);

    Point* p1 = new Point(5,5);
    Point* p2 = new Point(5,6);
    Point* p3 = new Point(5,7);
    
    pa->insert(0, *p1);
    pa->insert(1, *p2);
    pa->insert(2, *p3);

    ASSERT_TRUE(pa->get_size() == 3);
}

/*TEST_F(PointArrayTest, CanPushBack) {
    ASSERT_TRUE(0 == 1);
}

TEST_F(PointArrayTest, CanRemove) {
    ASSERT_TRUE(0 == 1);
}

TEST_F(PointArrayTest, CanClear) {
    ASSERT_TRUE(0 == 1);
}*/

/*TEST_F(PointArrayTest, CanGetNonConst){
    ASSERT_TRUE(pa->get_size() == 0);
    
    Point* p = new Point(5,5);
    pa->insert(0, *p);

    ASSERT_TRUE(pa->get_size() == 1);

    Point* f = pa->get(0);

    std::cout << "position p: " << p << std::endl;
    std::cout << "position f: " << f << std::endl;

    ASSERT_TRUE(f != nullptr);
    std::cout << "found x: " << f->getX() << std::endl;

    ASSERT_TRUE(f->getX() == 5);
}*/

/*TEST_F(PointArrayTest, CanGetConst){
    ASSERT_TRUE(0 == 1);
}*/
