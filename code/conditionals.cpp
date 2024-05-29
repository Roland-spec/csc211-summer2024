// Write a program in C++ (on paper) that:
// reads the number of hours
// calculates payment:
// if number of hours no greater than 40, payment is calculated using the regular hourly rate of $35
// if overtime, payment is calculated using the regular hourly rate for the first 40 hours and 
// the special rate of $50 for the remaining hours
// prints the calculated payment

#include <iostream>

int main(){

    int hours, payment, overtime;

    std::cin >> hours;

    if(hours <= 40){

        payment = hours * 35;
    }

    else{

        overtime = hours - 40;

        payment = ( overtime * 50 ) + (40 * 35);
    }

    std::cout << "your payment is " << payment;



    return 0;
}