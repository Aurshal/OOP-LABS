#include <iostream>
using namespace std;

class Date {
    int year;
    int month;
    int day;
    int daysInMonth;
public:
    Date(int y, int m, int d) :year(y), month(m), day(d) {
    };
    friend void operator++(Date& d);
    friend void operator++(Date& d, int);
    friend bool ifLeapYr(Date& d);
    friend void setDaysInMonth(Date& d);
    friend void updateDate(Date& d);
    void showDate() {
        cout << year << "/" << month << "/" << day << endl;
    }
};

void updateDate(Date& d) {
    ++d.day;
    if (d.day > d.daysInMonth) {
        ++d.month;
        d.day = 1;
    }
    if (d.month > 12) {
        ++d.year;
        d.month = 1;
    }
}
bool ifLeapYr(Date& d) {
    if (d.year % 4 != 0)
        return false;
    else if (d.year % 100 != 0)
        return true;
    else if (d.year % 400 != 0)
        return false;
    else
        return true;
}

void setDaysInMonth(Date& d) {
    if (d.month % 2 != 0)
        d.daysInMonth = 31;
    else if (d.month == 2) {
        if (!ifLeapYr(d))
            d.daysInMonth = 28;
        else
            d.daysInMonth = 29;
    }
    else
        d.daysInMonth = 30;
}

void operator++(Date& d) {
    setDaysInMonth(d);
    updateDate(d);
}

void operator++(Date& d, int) {
    setDaysInMonth(d);
    updateDate(d);
}

int main() {
    Date d1(2020, 11, 30), d2(1992, 2, 28);
    cout << "Date before pre-increment: " << endl;
    d1.showDate();
    ++d1;
    cout << "Date after pre-increment: " << endl;
    d1.showDate();
    cout << "Date before post-increment: " << endl;
    d2.showDate();
    d2++;
    d2++;
    cout << "Date after post-increment two times: " << endl;
    d2.showDate();
}