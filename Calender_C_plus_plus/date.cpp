#include "Date.h"
#include <stdio.h>
#include <string.h>

Date::Date(const string& year,const string& month,const string& day,const string& hour,const string& minutes) // need to get the data from configurator
{
    m_year=year;
    m_month=month;
    m_day=day;
    m_hour=hour;
    m_minutes=minutes;
}
