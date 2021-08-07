#include <iostream>
using namespace std;

int main() {
    float x = 654.67899;
    cout << x << endl;
    cout.setf(ios::left, ios::adjustfield);
    cout.width(14);
    cout.fill('*');
    cout.precision(4);
    cout << x << endl;

    cout.setf(ios::right, ios::adjustfield);
    cout.width(14);
    cout.fill('*');
    cout.precision(4);
    cout << x << endl;
    cout.unsetf(ios::adjustfield);
    cout.precision(6);
    cout << x << endl;
    cout.flags(ios::showpos);
    cout << x << endl;


    return 0;
}