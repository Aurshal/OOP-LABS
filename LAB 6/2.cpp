#include<iostream>
using namespace std;

class Fi;
class Mc {
private:
    float meters, centimeters;
public:
    Mc() : meters(0), centimeters(0) {}
    Mc(float x, float y) :meters(x), centimeters(y) {}
    void display() {
        cout << "Meters: " << meters << endl;
        cout << "Centimeters: " << centimeters << endl;
    }


};

class Fi {
private:
    float feet, inch;


public:
    Fi() {

    }
    Fi(float x, float y) : feet(x), inch(y) {}
    float retFeet() {
        return feet;
    }

    float retInch() {
        return inch;
    }

    operator Mc() {
        float met = feet * 3.28084;
        float cent = inch / 2.54;
        return Mc(met, cent);
    }

    void display() {
        cout << "Feet: " << feet << endl;
        cout << "Inch: " << inch << endl;
    }
};

int main()
{
    Fi f(23, 21);
    Mc m;
    cout << "Feet and inches: " << endl;
    f.display();
    m = f;
    cout << "Equivalent in meters and centimeters: " << endl;
    m.display();
    return 0;
}