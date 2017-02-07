#include"Channel.h"
#include<iostream>
#include<cstring>
#include<algorithm>
Channel::Channel(std::string strInFile, int maxSize)
{
    m_strFile = strInFile; 
    m_nMaxSize = maxSize;
    m_nTotalLength = 0;
    m_nReadSize = 0;
}
Channel::~Channel()
{
    CloseFile();
}
int Channel::GetAndRemove()
{
    int n = Get();
    Remove();
    return n;
}
bool Channel::IsEnd()
{
    return (m_nReadSize >= m_nTotalLength);
}
int Channel::Get()
{
   if(m_Iterator != m_Buff.end())
   {
       return *m_Iterator;
   }
   return -1;
}

void Channel::Remove()
{
    if(m_Iterator != m_Buff.end())
    {
        ++m_Iterator;
    }
    else
    {
        ReadFromFile();
    }   
}
void Channel::OpenFile()
{
   m_inFile.open(m_strFile);
   if(!m_inFile)
   {
       std::cerr<<"open file "<<m_strFile<<" failed"<<std::endl;
   }
   m_inFile.seekg(0, m_inFile.end);
   m_nTotalLength = m_inFile.tellg();
   m_inFile.seekg(0, m_inFile.beg);
}
void Channel::CloseFile()
{
    if(m_inFile.is_open())
    {
        m_inFile.close();
    }
}
void Channel::ReadFromFile()
{
    m_Buff.clear();
    if(m_nReadSize < m_nTotalLength)
    {
        int len = std::min(m_nTotalLength - m_nReadSize,m_nMaxSize);
        char* pchar = new char[len * sizeof(int)]; 
        int* pBuff = new int[len];
        m_inFile.read(pchar, len);      
        m_nReadSize += len;
        memcpy(pBuff, pchar, len * sizeof(int));
        delete[] pchar;
        m_Buff.assign(pBuff, pBuff + len);
        delete[] pBuff;
        m_Iterator = m_Buff.begin();
    }
}
