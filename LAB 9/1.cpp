#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int size) {
    T s{ 0 };
    for (int i = 0; i < size; i++) {
        s += arr[i];
        // cout << s << endl;
    }
    return s;
}

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    float b[] = { 2.3, 4.5, 6.7 };
    int sizeofa = sizeof(a) / sizeof(a[0]);
    int sizeofb = sizeof(b) / sizeof(b[0]);

    cout << "The sum of int elements of array is: " << sum(a, sizeofa) << endl;
    cout << "The sum of float elements of array is: " << sum(b, sizeofb) << endl;
}