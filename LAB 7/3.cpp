#include <iostream>
using namespace std;

class Student {
protected:
    string name, faculty;

public:
    Student(string n, string f) : name(n), faculty(f) {

    }

    virtual void display() {
        cout << name << " is a " << faculty << " student" << endl;

    }
};

class Engineering :public Student {
public:
    Engineering(string n, string f) :Student(n, f) {}
    void display() {
        Student::display();
    }
};

class Medicine :public Student {
public:
    Medicine(string n, string f) :Student(n, f) {}
    void display() {
        Student::display();
    }
};


class Science :public Student {
public:
    Science(string n, string f) :Student(n, f) {}
    void display() {
        Student::display();
    }
};

int main() {
    Student* s[100];
    s[0] = new Engineering("Kushal", "Computer Engineering");
    s[1] = new Medicine("Nikesh", "Dental");
    s[2] = new Science("Pawan", "Astro");
    for (size_t i = 0; i < 3; i++)
        s[i]->display();
    delete[]s;
}