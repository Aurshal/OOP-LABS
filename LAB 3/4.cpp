#include<iostream>
#include <math.h>

using namespace std;


class Circle{
    float rad;

    public:
        void getData(){
            cout<<"Enter the radius of circle: "<<endl;
            cin >> rad;
        }

        float area(){
            float a = 22.0 / 7 * rad * rad;
            return a;
        }

        float perimeter(){
            float p = 2 * 22.0 / 7 * rad;
            return p;
        }

        void showData(){
            cout << "For circle:" << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

class Triangle{
    float s1,s2,s3;

    public:
        void getData(){
            cout<<"Enter the sides of triangle serially: "<<endl;
            cin >> s1;
            cin >> s2;
            cin >> s3;

        }
        float perimeter(){
            float p = (s1 + s2 + s3) / 3.f;
            return p;
        }

        float area(){
            float s = perimeter();
            float uR;
            uR = s * (s - s1) * (s - s2) * (s - s3);
            return sqrt(uR);
        }

        

        void showData(){
            cout << "For Triangle:" << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

class Rectangle{
    float l,b;

    public:
        void getData(){
            cout<<"Enter the length and breadth of the rectangle serially: "<<endl;
            cin >> l;
            cin >> b;
        }

        float area(){
            float a = l*b;
            return a;
        }

        float perimeter(){
            float p = 2*(l+b);
            return p;
        }

        void showData(){
            cout << "For Rectangle:" << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

int main()
{
    Circle c;
    c.getData();
    c.showData();
    Triangle t;
    t.getData();
    t.showData();
    Rectangle r;
    r.getData();
    r.showData();

    return 0;
}