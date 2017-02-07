#include<cxxtest/TestSuite.h>
#include<iostream>
#include<sstream>
#include"../src/MergeSort.h"

class TestMergeInMemory: public CxxTest::TestSuite
{
    int * ptestArr;
    int len;
    public:
        void setUp()
        {
            const int arr[] = {10,2,5,0,9,8,4,5,2,1,3,1,11,12,21,11,22,23,26,43,11}; 
            len = sizeof(arr)/sizeof(int);
            ptestArr = new int[len]; 
            for(int i = 0; i != len; ++i)
            {
                ptestArr[i] = arr[i];
            }
            TS_TRACE("after setup");
        }
        void tearDown()
        {
            //if(ptestArr != NULL) delete[] ptestArr;
            ptestArr = NULL;
            len = 0;
        }
        void testMergeSort()
        {
            std::cout<<"test merge sort"<<std::endl;
           MergeSort* pms = new MergeSort();
           pms->MergeSortInMemory(ptestArr, len); 
           TS_TRACE("===========test merge sort result\n");
           std::stringstream ss;
            for(int i = 0; i != len; ++i)
            {
               // std::cout<<"ptestArr[i] ";
                ss << (ptestArr[i])<<" ";
            }
           delete pms;
           TS_TRACE(ss.str());
            //TS_ASSERT(1==0); 
            //TS_FAIL("123");
        }
};
