#ifndef _CHANNEL_H_
#define _CHANNEL_H_
#include <string>
#include<fstream>
#include<vector>
class Channel
{
    public:
        Channel(std::string strInFile,int maxSize);
        ~Channel();
        int Get();
        void Remove();
        int GetAndRemove();
        bool IsEnd();
    private:
        void OpenFile();
        void CloseFile();
        void ReadFromFile();
    private:

        std::vector<int>  m_Buff;
        std::vector<int>::iterator m_Iterator;
        int m_nMaxSize;
        int m_nTotalLength;
        int m_nReadSize;
        std::string m_strFile;
        std::ifstream m_inFile;
};
#endif
