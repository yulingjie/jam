#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_
#include<string>
class MergeSort
{
    public:
        MergeSort();
        ~MergeSort();
        void MergeSortInMemory(int* inData, size_t dataLen);
    private:
        void Sort();
        void ReadData(std::string inFile);

        bool CompareData(int l, int r);

};
#endif
