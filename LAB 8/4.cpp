#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct stData {
    string name;
    int roll;
    char add[100];
};


int main() {
    int n;
    cout << "ENTER THE NO. OF STUDENTS: ";
    cin >> n;


    stData student[50];
    for (int i = 0; i < n; i++) {
        cout << "Enter data for Student " << (i + 1) << ":" << endl;
        cout << "Enter name: ";
        cin >> student[i].name;
        cout << "Enter roll: ";
        cin >> student[i].roll;
        cout << "Enter address: ";
        cin >> student[i].add;
        cout << "------------------------------------" << endl;
    }

    ofstream myfile;
    myfile.open("data.txt");
    if (myfile.is_open()) {
        // struct stData temp;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++) {
        //         if (((student[i].name).compare(student[j].name)) > 0) {
        //             temp = student[i];
        //             student[i] = student[j];
        //             student[j] = temp;
        //         }
        //     }
        // }

        for (int i = 0; i < n; i++)
        {
            myfile << student[i].name << "\n";
            myfile << student[i].roll << "\n";
            myfile << student[i].add << "\n";
            myfile << "\n";
        }
    }

    else {
        cout << "Error opening the file." << endl;
    }

    myfile.close();

    ifstream myfile1("data.txt");
    string na;
    int r;
    char a[100];
    if (!myfile1.is_open()) {
        cout << "Error opening the file" << endl;
    }
    cout << "\n\n---------Data from the file-------\n";
    int i;
    while (!myfile1.eof())
    {
        i++;
        if (i > n)
            break;
        myfile1 >> na >> r >> a;
        cout << "Name: " << na << endl;
        cout << "Roll: " << r << endl;
        cout << "Address: " << a << endl;
        cout << "------------------------------------" << endl;
    }
    myfile1.close();
}
