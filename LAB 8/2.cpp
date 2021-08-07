#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x = 3535.4545;
    cout << setw(10) << setfill('*') << setprecision(5) << x << endl;
}