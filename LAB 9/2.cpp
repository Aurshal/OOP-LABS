#include <iostream>
using namespace std;
const int MAX = 10;

template<class T>
class Queue {
private:
    T arr[MAX];
    T rear{ 0 };
public:
    T remove();
    void add(T);
    T size();
};

template<class T>
void Queue<T>::add(T x) {
    if (rear >= MAX)
        cout << "Queue is full" << endl;
    else {
        arr[rear++] = x;
    }
}
template<class T>
T Queue<T>::remove() {
    if (rear == 0) {
        cout << "Queue is empty" << endl;
        return -1;

    }
    else {
        rear--;
        T front{ arr[0] };
        for (T i = 0; i < rear; i++) {
            arr[i] = arr[i + 1];
        }
        return front;
    }
}

template<class T>
T Queue<T>::size() {
    return rear;
}

int main() {
    Queue<int> q;
    q.add(2);
    q.add(3);
    q.add(5);
    q.add(7);
    cout << q.size() << endl;
    cout << q.remove() << endl;
    cout << q.remove() << endl;
    cout << q.remove() << endl;
    cout << q.size() << endl;
}