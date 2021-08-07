#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend istream& operator >>(istream& s, Complex& c);
    friend ostream& operator <<(ostream& s, Complex& c);
};
istream& operator >> (istream& s, Complex& c) {
    cout << "Enter real: "; s >> c.real;
    cout << "Enter imaginary: ";s >> c.imag;
    return s;
}

ostream& operator <<(ostream& s, Complex& c) {
    s << "The complex num is: " << c.real << " + " << "i" << c.imag << endl;
    return s;
}

int main() {
    Complex c1;
    cin >> c1;
    cout << c1;
}