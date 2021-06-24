#include <iostream>
using namespace std;

inline double display(double);

int main(){
    double salary;
    cout << "Enter the salary: ";
    cin >> salary;
    double payment = display(salary);
    cout << "The payment is: " << payment << endl;
}

inline double display(double salary){
    double tax = 0.1;
    return salary - tax * salary;
}