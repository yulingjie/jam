#include<cxxtest/TestSuite.h>
#include"../src/tl.h"
class MyTestSuite: public CxxTest::TestSuite
{
    public:
        void testAddition(void)
        {
            tl(1,2);
            TS_ASSERT_EQUALS( 1+1, 2);
            int * parr = new int[10];
            delete[] parr;
        }
};
