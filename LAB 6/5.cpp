#include<iostream>
using namespace std;

class FComplex;
class Complex {
public:
    float real, imag;
public:
    Complex() {}
    Complex(float r, float i) : real(r), imag(i) {}
    void display() {
        cout << this->real;
        if (this->imag >= 0)
            cout << "+";
        cout << this->imag << "j" << endl;
    }

};

class DComplex : public Complex {
public:
    DComplex(float r, float i) {
        this->real = r;
        this->imag = i;
    }

    void add(Complex& c) {
        real += c.real;
        imag += c.imag;
    }
    void display() {
        Complex::display();
    }
    friend class FComplex;

};

class FComplex {
private:
    float real, imag;
public:
    FComplex(float r, float i) : real(r), imag(i) {};
    void sub(Complex& c) {
        real -= c.real;
        imag -= c.imag;

    }
    void display() {
        cout << this->real;
        if (this->imag >= 0)
            cout << "+";
        cout << this->imag << "j" << endl;
    };
};

int main()
{
    Complex c1(2, 2);
    DComplex d1(8, -9);
    FComplex f1(3, 1);

    cout << "c1: ";c1.display();
    cout << "d1: ";d1.display();
    cout << "f1: ";f1.display();

    cout << "After adding d1 to c1, d1: " << endl;
    d1.add(c1);
    d1.display();
    cout << "After subtracting f1 from c1, f1: " << endl;
    f1.sub(c1);
    f1.display();
    return 0;
}