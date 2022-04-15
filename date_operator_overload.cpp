#include <iostream>
using namespace std;



class Date
{

    int year;
    int month;
    int day;

public:
    Date(int, int, int);
    bool operator>(const Date &other);
    void operator++();
    Date operator+(const Date& other);
    Date operator=(const Date& other);
};

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

bool Date::operator>(const Date &other)
{
    if (year > other.year)
        return true;

    if (year = other.year && month > other.month)
        return true;

    if (year == other.year && month == other.month && day > other.day)
        return true;
}

void Date::operator++()
{

    day++;

    if (day > 30)
    {
        day = 1;
        month++;
    }

    if (month > 12)
    {
        month = 1;
        year++;
    }
}

Date Date::operator+(const Date& other){
    day = day + other.day;
    if (day > 30){
        day = (day + other.day) % 30;
        month++;
    }

    month = month + other.month;
    if(month > 12){
        month = (month + other.month) % 12;
        year++;
    }
    

}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
