#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    friend bool operator>(A n, A m);
    friend bool operator<(A n, A m);
    friend bool operator==(A n, A m);
    friend bool operator!=(A n, A m);
    friend bool operator>=(A n, A m);
    friend bool operator<=(A n, A m);
};

bool operator>(A n, A m) {
    return (n.x > m.x);
}

bool operator<(A n, A m) {
    return (n.x < m.x);;
}

bool operator==(A n, A m) {
    return (n.x == m.x);
}

bool operator!=(A n, A m) {
    return (n.x != m.x);
}

bool operator>=(A n, A m) {
    return (n.x >= m.x);
}

bool operator<=(A n, A m) {
    return (n.x <= m.x);
}

int main() {
    A p(3), q(6);
    cout << (p > q) << endl;
    cout << (p < q) << endl;
    cout << (p >= q) << endl;
    cout << (p <= q) << endl;
    cout << (p != q) << endl;
    cout << (p == q) << endl;
}