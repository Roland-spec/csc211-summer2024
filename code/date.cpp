#include <iostream>

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

void operator

void Date::addMonths(int addedMonths){

    month += addedMonths;

}

void Date::addDay(int addedDays){
    day += addedDays;
}

int main(){

    Date today;

    today.set(11, 15, 2022);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}