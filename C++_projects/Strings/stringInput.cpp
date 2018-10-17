#include "stringInput.h"
#include <stdio.h>
#include <stringInput.h>

using namespace std;


strInput::strInput () // CTOR
{
    m_str = createFrom(NULL);
}

strInput::strInput (const char * strInput) //  CTOR
{
    m_str = createFrom(strInput);
}

strInput::strInput (const strInput& strinput) // copy CTOR
{
    m_str = createFrom(strinput.m_str);
}
strInput& strInput::operator=(const strInput& strinput) // copy CTOR
{
    if (this != &strinput)
    {
        m_str = createFrom(strinput.m_str);
    }
    return *this;

}
strInput::~strInput()
{
    delete[] m_str;
}

size_t strInput::length() const
{
    return strlen(this->m_str);
}

int strInput::setString (const char * str)
{
    if (str != NULL)
    {
        if( strlen(str) > strlen(m_str))
        {
            delete[] m_str;
            m_str = createFrom(str);
        }
        else
        {
            strcpy(m_str,str);
        }


    }

}

int main()
{

    return 0;
}
