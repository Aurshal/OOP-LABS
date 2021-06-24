#include <iostream>
using namespace std;

namespace Square{
    int num;
    int fun(int n){
        return n * n;
    }
}

namespace Cube{
    int num;
    int fun(int n){
        return n * n * n;
    }
}

int main(){
    Square::num = 4;
    Cube::num = 5;
    cout << Square::fun(Cube::num) << endl;
    cout << Cube::fun(Square::num) << endl;
}