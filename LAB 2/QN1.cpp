#include <iostream>
using namespace std;


struct date{
    int month;
    int day;
    int year;
};

void showDate(date s);

int main()
{
    date d1;
    cout << "Enter the date below:"<<endl;
    cout <<"Month: ";
    cin >> d1.month;
    cout << "Day: ";
    cin >> d1.day;
    cout << "Year: ";
    cin >> d1.year;
    showDate(d1);
}

void showDate(date s){
    cout<<endl << "The date is: " << endl;
    cout << s.month << "/" << s.day << "/" << s.year << endl;
}