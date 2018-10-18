#ifndef YEAR_H
#define YEAR_H


class Year {
public:
    Year (const size_t year);
    ~Year();
    addDate(const size_t month, const size_t day);

private:
    size_t day;
    size_t months;
    }

};

#endif // YEAR_H
