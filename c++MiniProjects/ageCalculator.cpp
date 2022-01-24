/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int day, month, year;
    struct tm date = {0};
    cout << "Enter Your Date of Birth ( Year(4 digits) Month(2 digits)  Day(2 digits) ): ";
    cin >> year >> month >> day;
    date.tm_year = year-1900;
    date.tm_mon  = month-1;
    date.tm_mday = day;
    time_t normal = mktime(&date);
    time_t current;
    time(&current);
    int age = (difftime(current, normal) + 86400L/2) / 86400L;
    cout << "You are " << age/365 << " years old.";
    return 0;
}