#include <iostream>
using namespace std;

double& temp(double &t1, double &t2);

int main(){
    double t1, t2;
    t1 = 43.5;
    t2 = 56.7;
    temp(t1, t2) = 100;
    cout << t1 << endl;
    cout << t2 << endl;
}

double& temp(double &t1, double &t2){
    if (t1 >= t2)
        return t1;
    else
        return t2;
}