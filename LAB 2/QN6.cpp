#include <iostream>

using namespace std;

void currSal(double sal, double per = 0.12){
    cout << (sal + sal * per) << endl;
}

int main(){
    cout << "The salaries in 2010: " << endl;
    cout << "Chief executive officer Rs.";
    currSal(35000, 0.09);
    cout << "Information officer Rs.";
    currSal(25000, 0.1);
    cout << "System analyst Rs.";
    currSal(24000);
    cout << "Programmer Rs.";
    currSal(18000);
}