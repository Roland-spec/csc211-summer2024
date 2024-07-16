#include <iostream>
#include "Date.h"


void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::addYears(int addedYears){

    if(addedYears > 0){
        year += addedYears;
    }

}


void Date::addMonths(int addedMonths){

    month += addedMonths;

}

void Date::addDay(int addedDays){
    day += addedDays;
}
