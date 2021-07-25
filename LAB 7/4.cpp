#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void display() {
        cout << "I am vehicle." << endl;
    }
};

class Bus : public Vehicle {
public:
    void display() {
        cout << " I  am bus." << endl;
    }
};

class Car : public Vehicle {
public:
    void display() {
        cout << " I  am Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void display() {
        cout << " I  am Bike." << endl;
    }
};

int main() {
    Vehicle* v;
    Vehicle v1;
    Bus* b1;
    Bus b;
    v = &b;
    b1 = dynamic_cast<Bus*>(v);
    b1->display();
    cout << "Type of v is: " << typeid(v).name() << endl;
    cout << "Type of v1 is: " << typeid(v1).name() << endl;
    cout << "Type of b1 is: " << typeid(b1).name() << endl;
    cout << "Type of b is: " << typeid(b).name() << endl;


}