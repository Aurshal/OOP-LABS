#include<iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void set() {
        cout << "Enter the name: "; cin >> name;
        cout << "Enter the age: "; cin >> age;
    }
    void getAddr() {
        cout << "The addr of obj is: " << this << endl;
    }
    void update() {
        cout << "Update the data: " << endl;
        cout << "New name: ";cin >> this->name;
        cout << "New age: ";cin >> this->age;
    }
    void del() {
        delete this;
    }
};

class Student : public Person {
private:
    string college;
public:
    void set() {
        Person::set();
        cout << "Enter college: ";cin >> college;

    }
    void getAddr() {
        Person::getAddr();
    }
    void update() {
        Person::update();
        cout << "New college: ";cin >> this->college;
    }
    void del() {
        delete this;
    }
};

class Employee : public Person {
private:
    string empId;
public:
    void set() {
        Person::set();
        cout << "Enter employee id: ";cin >> empId;
    }
    void update() {
        Person::update();
        cout << "New emp id: "; cin >> this->empId;
    }
    void getAddr() {
        Person::getAddr();
    }
    void del() {
        delete this;
    }
};


int main()
{
    Person p;
    Student s, s1;
    Employee e;
    p.getAddr();
    cout << sizeof(p) << endl;
    cout << "\nFor student: " << endl;
    // s.set();
    s.getAddr();
    s1.getAddr();
    cout << sizeof(s) << endl;
    cout << "\nFor employee: " << endl;
    // e.set();
    cout << sizeof(e) << endl;

    e.getAddr();
    return 0;
}