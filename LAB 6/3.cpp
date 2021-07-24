#include<iostream>
#include <string>
using namespace std;

class Musicians {
protected:
    string sarr[5];
    string warr[5];
    string parr[5];

public:
    Musicians() {
        str();
        wind();
        perc();
    }
    //function to initialize the arr to  veena, guitar, sitar, sarod and mandolin
    void str() {
        string givData[5] = { "Veena", "Guitar", "Sitar", "Sarod", "Mandolin" };
        for (int i = 0; i < 5; i++) {
            sarr[i] = givData[i];
        }

    }
    void wind() {
        string givData[5] = { "flute", "clarinet", "saxophone", "nadhaswaram", "piccolo" };
        for (int i = 0; i < 5; i++) {
            warr[i] = givData[i];
        }
    }
    void perc() {
        for (int i = 0; i < 5; i++) {
            string givData[5] = { "tabla", "mridangam", "bangos", "drums", "tambour" };
            parr[i] = givData[i];
        }
    }
};

class Derived : public Musicians {
public:
    void get() {
        cout << "Types of instrument to be displayed: \n" << "a.  String instruments" << endl << "b.  Wind instruments" << endl << "c.  Percussion instruments" << endl;
    }
    void show() {
        char usrInp;
        cout << "Enter your choice: (a, b, c)" << "\n>>";
        cin >> usrInp;
        if (usrInp == 'a') {
            for (int i = 0; i < 5; i++) {
                cout << "\n" << sarr[i];
            }
        }
        else if (usrInp == 'b') {
            for (int i = 0; i < 5; i++) {
                cout << "\n" << warr[i];
            }

        }
        else if (usrInp == 'c')
        {
            for (int i = 0; i < 5; i++) {
                cout << "\n" << parr[i];
            }
        }
        else {
            cout << "Invalid Input" << endl;
        }
    }
};


int main()
{
    Derived d;
    d.get();
    d.show();
    return 0;
}