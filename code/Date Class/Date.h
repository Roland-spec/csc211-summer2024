#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
    private:
        int month;
        int year;
        int day;

    public:
        
        void addYears(int addedYears);
        void addDay(int addedDays);
        void addMonths(int addedMonths);
        
        void set(int m, int d, int y);
        void print();
};
#endif