#include <iostream>
#include "Date.h"


int main(){

    Date today;

    today.set(07, 15, 2024);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}