#include <iostream>
using namespace std;
const float PI{ 3.14 };


class Shape {
protected:
    string name;
public:
    Shape(string s) : name(s) {}
    virtual void calArea() {
        return;
    }
    virtual void display() {
        cout << this->name << endl;
    }

    virtual ~Shape() {
        cout << "Shape Destructor" << endl;
    }
};

class Circle : public Shape {
private:
    float rad, area;

public:
    Circle(float r) :rad(r), Shape("Circle") {
        calArea();
    }

    void calArea() {
        area = PI * rad * rad;
        return;
    }



    void display() {
        Shape::display();
        cout << "Radius: " << rad << endl;
        cout << "Area: " << area << endl;
    }

    ~Circle() {
        cout << "Circle destructor" << endl;
    }
};


class Rectangle : public Shape {
private:
    float l, b, area;

public:
    Rectangle(float n, float m) :l(n), b(m), Shape("Rectangle") {
        calArea();
    }

    void calArea() {
        area = l * b;
        return;
    }



    void display() {
        Shape::display();
        cout << "Length: " << l << endl;
        cout << "Breadth: " << b << endl;

        cout << "Area: " << area << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor" << endl;
    }
};

class Trapezoid : public Shape {
private:
    float a, b, h, area;

public:
    Trapezoid(float m, float n, float o) :a(m), b(n), h(o), Shape("Trapezoid") {
        calArea();
    }

    void calArea() {
        area = 0.5 * h * (a + b);
        return;
    }



    void display() {
        Shape::display();
        cout << "Top: " << a << endl;
        cout << "Bottom: " << b << endl;
        cout << "Height: " << h << endl;
        cout << "Area: " << area << endl;
    }

    ~Trapezoid() {
        cout << "Trapezoid destructor" << endl;
    }
};

int main() {
    Shape* s;
    s = new Circle(4.5);
    s->display();
    delete s;

    cout << endl;
    s = new Rectangle(3, 5);
    s->display();
    delete s;

    cout << endl;
    s = new Trapezoid(3, 5, 9);
    s->display();
    delete s;
    return 0;
}