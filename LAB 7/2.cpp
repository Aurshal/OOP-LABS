#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

    }
};

class Employee : public Person {
protected:
    int salary;
public:
    Employee(string n, int a, int s) : Person(n, a), salary(s) {}
    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;

    }
};

class Student : public Person {
protected:
    string college;
public:
    Student(string n, int a, string c) :Person(n, a), college(c) {}
    void display() {
        Person::display();
        cout << "College: " << college << endl;

    }

};

class Manager :public Student, public Employee {
public:
    Manager(string n, int a, string c, int s) :Student(n, a, c), Employee(n, a, s) {}

    void display() {
        Student::display();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person* p;
    p = new Student("Kushal", 19, "Aroma college");
    p->display();
    delete p;

    p = new Employee("Nabin", 20, 56789);
    p->display();
    delete p;

    Student* s;
    s = new Manager("Hanuman", 2345, "Orchid college", 323);
    s->display();
    delete s;
}