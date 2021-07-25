#include <iostream>
using namespace std;

class Student {
protected:
    string name;

public:
    Student(string n) : name(n) {

    }

    virtual void display() {
        cout << "I am student " << endl;
    }
};

class Engineering :public Student {
protected:
    string faculty;
public:
    Engineering(string n, string f) :Student(n), faculty(f) {}
    void display() {
        cout << "I am a engineering student" << endl;
    }
};

class Medicine :public Student {
protected:
    string faculty;
public:
    Medicine(string n, string f) :Student(n), faculty(f) {}
    void display() {
        cout << "I am a Medicine student" << endl;
    }
};


class Science :public Student {
protected:
    string faculty;
public:
    Science(string n, string f) :Student(n), faculty(f) {}
    void display() {
        cout << "I am a Science student" << endl;
    }
};

int main() {
    Student* s[100];
    s[0] = new Engineering("Kushal", "Computer Engineering");
    s[1] = new Medicine("Nikesh", "Dental");
    s[2] = new Science("Pawan", "Astro");
    for (size_t i = 0; i < 3; i++)
        s[i]->display();
}