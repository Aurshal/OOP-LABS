#include<iostream>
using namespace std;

class Convert {
private:
    float meter;
    float centimeter;

public:
    void getMeters() {
        cout << "Enter the meter: ";
        cin >> meter;
    }

    void toCentimeters() {
        cout << "In centimeters: " << (meter * 100.0) << " cm" << endl;
    }

    void getCentimeters() {
        cout << "Enter the centimeters: ";
        cin >> centimeter;
    }

    void toMeters() {
        cout << "In meters: " << (centimeter / 100.0) << " m" << endl;
    }
};

int main()
{
    Convert c;
    c.getCentimeters();
    c.toMeters();
    c.getMeters();
    c.toCentimeters();
    return 0;
}