#ifndef __TEST_GENERATE_DATA_H__
#define __TEST_GENERATE_DATA_H__
#include<cxxtest/TestSuite.h>
#include<boost/random/mersenne_twister.hpp>
#include<boost/random/uniform_int.hpp>
#include<boost/random/variate_generator.hpp>
#include<iostream>
#include<fstream>
#include<bitset>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<cstring>
class TestGenerateData: public CxxTest::TestSuite
{
    static const int TOTAL_LEN= 10000000;
    boost::mt19937 gen;
    std::bitset<TOTAL_LEN> numberSet;
    std::vector<int> numbers;
    public:
    void setUp()
    {
        numberSet.reset();
        //numbers.resize(TOTAL_LEN);
    }
    void tearDown()
    {
    }
    int roll_die()
    {
        boost::uniform_int<> dist(0, TOTAL_LEN - 1);
        boost::variate_generator<boost::mt19937&, boost::uniform_int<> > die(gen, dist);
        return die();
    }

    void testGenData()
    {
        int roundNum =500;
        while(numberSet.count() != TOTAL_LEN)
        {
            int num = roll_die();
            for(int i = 0; i < roundNum; ++i)
            {
                while(numberSet.test(num))
                {
                    num = (num + 1) % TOTAL_LEN;
                }
            

                int k = (num + i) % TOTAL_LEN;
                if(numberSet.test(k)) continue;
                
                if(!numberSet.test(k))
                {
                    numberSet.set(k);
                    numbers.push_back(k);            
                    std::cout<< "current roll number "<<k
                        <<" total numberSet number "<< numberSet.count()
                        <<" total number count "<< numbers.size()
                        <<std::endl; 
                }

                if(numberSet.count() >= TOTAL_LEN) break;
            }
        }


        std::ofstream ofile("testdata", std::ios::out |std::ios::binary);
        if(!ofile)
        {
            std::cout<<"ofile error"<<std::endl;
        }
        char* pInt = new char[sizeof(int) * numbers.size()];
        char* pIte = pInt;
        for(std::vector<int>::iterator ite = numbers.begin();
                    ite != numbers.end();
                    ++ite)
        {
            memcpy(pIte, &(*ite), sizeof(int));
            pIte += sizeof(int);
        }
        ofile.write(pInt, sizeof(int) * numbers.size());
        std::cout<<"out to file!"<<std::endl;
        ofile.close();
        delete[] pInt;
    }

};
#endif
