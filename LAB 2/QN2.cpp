#include <iostream>

using namespace std;

void convert();
void convert(double n);
void convert(double &n, double &m);

int main(){
    convert();
    double feet;
    double inches;
    cout << "Enter the feet: ";
    cin >> feet;
    convert(feet);
    convert(feet, inches);
    cout << "Inches: " << inches << endl;
}

void convert(){
    double feet;
    double inches;
    cout << "Enter the feet: ";
    cin >> feet;
    cout << "Inches: " << feet * 12 << endl;
    return;
}

void convert(double n){
    double inches;
    inches = n * 12.0;
    cout << "Inches: " << inches << endl;
}

void convert(double &n, double &m){
    m = n * 12.0;
}