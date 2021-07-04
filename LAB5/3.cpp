#include <iostream>
using namespace std;

class ThreeD{
    int x, y, z;
    public:

    ThreeD(int n = 0, int m =0, int o=0): x(n), y(m), z(o){}
    friend ThreeD operator+(ThreeD q, ThreeD p);
    friend ThreeD operator-(ThreeD q, ThreeD p);
    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }

};

ThreeD operator+(ThreeD q,ThreeD p){
    ThreeD t;
    t.x = q.x + p.x;
    t.y = q.y + p.y;
    t.z = q.z + p.z;
    return t;
}

ThreeD operator-(ThreeD q,ThreeD p){
    ThreeD t;
    t.x = q.x - p.x;
    t.y = q.y - p.y;
    t.z = q.z - p.z;
    return t;
}

int main(){
    ThreeD a(3,4), b(6,7), c, d;
    c = a+b;
    d = a-b;
    c.show();
    d.show();
}