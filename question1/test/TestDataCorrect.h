#ifndef __TEST_DATA_CORRECT_H__
#define __TEST_DATA_CORRECT_H__
#include <cxxtest/TestSuite.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<bitset>
#include<cstdio>
class TestDataCorrect: public CxxTest::TestSuite
{
    static const int TOTAL_LEN = 10000000;
    public:
        void setUp()
        {
        }
        void tearDown()
        {
        }
        void testIntSize()
        {
            std::cout<<"sizeof int "<< sizeof(int)<<std::endl;
        }
        void testDataOrder()
        {
            std::cout<<"test data order"<<std::endl;
            std::ifstream ifile("testdata", std::ios::in | std::ios::binary);
            if(!ifile)
            {
                std::cerr<<"cannot open testdata file"<<std::endl;
            }
            std::bitset<TOTAL_LEN> numberSet;
            std::vector<int> numbers;
            numberSet.reset();
            int n = 0;
            size_t nIntLen = sizeof(int);
            ifile.seekg(0, ifile.end);

            int fileLen = ifile.tellg();
            ifile.seekg(0, ifile.beg);
            //std::cout<<"file len "<<fileLen<<std::endl;
            char* pInt = new char[fileLen]; 
            ifile.read(pInt, fileLen);
            char* pIte = pInt;
            while(pIte != pInt + fileLen)
            {
                //memset(pInt, 0, nIntLen + 1);
                //ifile.read(pInt, nIntLen);
                memcpy(&n, pIte, nIntLen);
                pIte += nIntLen;
                std::bitset<32> bt(n); 
                std::cout<<"read "<<n<<" bt "<<bt;
                numbers.push_back(n);
                if(numberSet.test(n))
                {
                    TS_FAIL("number already exist!");
                    break;
                }
                numberSet.set(n);
                std::cout<<std::endl;
                
            }
            ifile.close();
            TS_ASSERT_EQUALS(numbers.size(), TOTAL_LEN);
            TS_ASSERT_EQUALS(numberSet.count(),TOTAL_LEN);
        }
};
#endif
