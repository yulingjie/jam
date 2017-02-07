#include"MergeSort.h"
#include<algorithm>
#include<cstring>
#include<iostream>
MergeSort::MergeSort()
{
}
MergeSort::~MergeSort()
{
}
void MergeSort::Sort()
{
}
void MergeSort::ReadData(std::string inFile)
{
}

void MergeSort::MergeSortInMemory(int* inData, size_t dataLen)
{

    if(inData == NULL || dataLen <=0 ) return;
    int len = static_cast<int>(dataLen);
    int *tmpData = new int[len];
    
    int tmpIndex = 0;
    int span = 1;
    int lStartIndex = 0, rStartIndex = 0;
    while(span < len )
    {
        tmpIndex = 0;
        lStartIndex = 0;
        rStartIndex = lStartIndex + span ;
       // std::cout<<"==============span "<<span<<" ================"<<std::endl;
        while(lStartIndex < len)
        {
            int lIndex = lStartIndex;
            int rIndex = rStartIndex;
            int lLimit = std::min(lStartIndex + span, len);
            int rLimit = std::min(rStartIndex + span, len);
            std::cout<<"    lStartIndex "<<lStartIndex
                    << "    lLimit "<<lLimit
                    <<" rStartIndex "<<rStartIndex
                    <<"     rLimit "<<rLimit
                    <<std::endl;
            int oldTmpIndex = tmpIndex;
            for(;
                    (lIndex < lLimit) &&
                    (rIndex < rLimit);)
            {
        /*        std::cout<<"compare between lIndex "<<lIndex
                        <<" lData "<< inData[lIndex]
                        <<" rIndex "<<rIndex
                        <<" rData"<< inData[rIndex]
                        <<std::endl;*/
                if(CompareData(inData[lIndex], inData[rIndex]))
                {
                    std::cout<<"use ldata ";
                    tmpData[tmpIndex] = inData[lIndex];
                    ++tmpIndex;
                    ++lIndex;
                }
                else
                {
                    std::cout<<"use rdata";
                    tmpData[tmpIndex] = inData[rIndex];
                    ++tmpIndex;
                    ++rIndex;
                }
                std::cout<<std::endl;
            }
            for( ; lIndex < lLimit;)
            {
                tmpData[tmpIndex] = inData[lIndex];
                ++tmpIndex;
                ++lIndex;
            }
            for(; rIndex < rLimit;)
            {
                tmpData[tmpIndex] = inData[rIndex];
                ++tmpIndex;
                ++rIndex;
            }

            lStartIndex = rStartIndex + span;
            rStartIndex = lStartIndex + span;
            //std::cout<<"    after one order ";
            for(;oldTmpIndex < tmpIndex;++oldTmpIndex)
            {
                std::cout<<" "<<tmpData[oldTmpIndex]<<" ";
            }
            std::cout<<std::endl;
        }
        memcpy(inData, tmpData,  sizeof(int) * dataLen);
        span = span << 1;
    }
    //std::cout<<"before delete"<<std::endl; 
    //memcpy(inData, tmpData,  sizeof(int) * dataLen);
    delete[] tmpData;

}

bool MergeSort::CompareData(int l, int r)
{
    return l > r;
}
