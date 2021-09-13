#include <iostream>
using namespace std;
class Ex {};
void func2();
void func1() {
    cout << "func1" << endl;
    try {
        func2();

    }
    catch (Ex) {
        cout << "catched in func1()" << endl;
        throw;
    }

}
void func2() {
    cout << "func2" << endl;
    throw Ex();
}

int main() {
    try {
        func1();
    }
    catch (Ex) {
        cout << "exception caught in calling function main()" << endl;
        throw;
    }

    return 0;
}