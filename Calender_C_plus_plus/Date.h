#ifndef DATE_H
#define DATE_H

class Date {
public: // date format YYYY-MM-DD-hh-mm
    Date(const string& year,const string& month,const string& day,const string& hour,const string& minutes); // need to get the data from configurator
    ~Date();

private:
    size_t m_year;
    size_t m_month;
    size_t m_day;
    size_t m_hour;
    size_t m_minutes;
};

#endif // DATE_H
