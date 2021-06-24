#include<iostream>
using namespace std;

class Fahrenheit{
    private:
        double tempF;

    public:
        double toCelsius();
        void getData(){
            cin >> tempF;
        }
};

class Celsius {
    private:
        double tempC;

    public:
        double toFahrenheit();
        void getData(){
            cin >> tempC;
        }
};

double Fahrenheit::toCelsius(){
    double tempC = 5.0 / 9.0 * (tempF - 32.0);
    return tempC;
}

double Celsius::toFahrenheit(){
    double tempF = (tempC * 9.0 / 5.0) + 32;
    return tempF;
}

int main()
{
    Fahrenheit f;
    Celsius c;

    cout << "Fahrenheit temp: ";
    f.getData();
    cout << "TO CELSIUS: " << f.toCelsius() << endl;
    cout << "Celsius temp: ";
    c.getData();
    cout << "TO FAHRENHEIT: " << c.toFahrenheit() << endl;
    return 0;
}