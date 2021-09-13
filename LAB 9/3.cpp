#include <iostream>
using namespace std;

const int MAX = 4;
template <class T>
class Stack {
private:
    T arr[MAX];
    int top;
public:
    class FULL {

    };
    class EMPTY {

    };

    Stack() {
        top = -1;
    }
    void push(T data) {
        if (top >= MAX - 1) {
            throw FULL();
        }
        else
            arr[++top] = data;

    }
    T pop() {
        if (top == -1)
            throw EMPTY();
        return arr[top--];
    }

    int size() {
        return (top + 1);
    }
};


int main() {
    Stack<float> s1;
    try {
        for (float i = 0.f; i < 5.0f;i++)
            s1.push(i);
        while (true)
            s1.pop();
    }
    catch (Stack<float>::FULL) {
        cout << "s1 Stack overflow" << endl;
    }
    catch (Stack<float>::EMPTY) {
        cout << "s1 Stack empty" << endl;
    }
    Stack<long> s2;

    try {
        while (true)
            s2.pop();
    }
    catch (Stack<long>::FULL) {
        cout << "s2 Stack overflow" << endl;
    }
    catch (Stack<long>::EMPTY) {
        cout << "s2 Stack empty" << endl;
    }
    return 0;
}