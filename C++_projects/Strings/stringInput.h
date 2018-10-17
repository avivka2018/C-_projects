#ifndef STRING_H
#define STRING_H
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

class strInput {
public:
    strInput (); //  CTOR
    strInput (const char * strInput); //  CTOR from const char *
    strInput (const strInput& strinput); // copy CTOR
    operator=(const strInput& strinput); //assignment operator
    ~strInput();
    size_t length() const;
    int setString (const char * str);
private:
    char * m_str;
    char * createFrom(const char* str){
        if (str != NULL){
            char* tmp = new char [strlen(str)+1];
            strcpy(tmp,str);
            return tmp;
        }
        char * tmp = new char[1];
        tmp[0] = '\0';
        return tmp;
    }

};

#endif // STRING_H
