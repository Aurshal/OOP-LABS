#include <iostream>

using namespace std;

class B;
class A{
    private:
        double x,y;
    public:
        A (double n = 0, double m=0): x(n), y(m){}
        friend void add(A p, B q);
        A addition(B);
        friend void multiplication(A p, B q);
        friend void division(A p, B q);
        friend void subtraction(A p, B q);

        void show(){
            cout<<"x: "<<x<<endl;
            cout<<"y: "<<y<<endl;
        }
};

class B{
    private:
        double x,y;

    public: 
        B (double n, double m): x(n), y(m){}
        friend void multiplication(A p, B q);
        friend void division(A p, B q);
        friend void subtraction(A p, B q);
        friend A A::addition(B);
};

A A::addition(B a){
    this->x += a.x;
    this->y +=a.y;
    return *this;
}

void multiplication(A p, B q){
    p.x *= q.x;
    p.y *= q.y;
    cout<<"After multiplication: \n"<<"(x,y)"<<" = "<<"("<<p.x<<","<<p.y<<")"<<endl;

}

void division(A p, B q){
    p.x /= q.x;
    p.y /= q.y;
    cout<<"After division: \n"<<"(x,y)"<<" = "<<"("<<p.x<<","<<p.y<<")"<<endl;

}

void subtraction(A p, B q){
    p.x -= q.x;
    p.y -= q.y;
    cout<<"After subtraction: \n"<<"(x,y)"<<" = "<<"("<<p.x<<","<<p.y<<")"<<endl;

}

int main(){
    A a(3,4),c;
    B b(2,8);

    multiplication(a,b);
    division(a,b);
    subtraction(a,b);


    c = a.addition(b);
    c.show();
}