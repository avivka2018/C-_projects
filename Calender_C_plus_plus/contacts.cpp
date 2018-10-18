#include "contact.h"

contact::contact (const int id, const char * name, const char * phone) //  CTOR
{
    if (id != NULL && name != NULL && phone !=NULL )
    {
        m_id = id;
        m_name = createFrom(name);
        m_phone = createFrom(phone);
    }
}
contact::~contact()
{
    delete[] m_name;
    delete[] m_phone;
}



