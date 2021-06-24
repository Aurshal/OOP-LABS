#include <iostream>
#include <fstream>
#include <string>

using namespace std;



struct stData{
    string name;
    int roll;
    char add[100];
};


int main(){
    int n;
    cout << "ENTER THE NO. OF STUDENTS: ";
    cin >> n;


    stData student[50];
    for (int i = 0; i < n; i++){
        cout << "Enter the name for student"<< (i + 1)<<": ";
        cin >> student[i].name;
        cout << "Enter the roll for student"<< (i + 1)<<": ";
        cin >> student[i].roll;
        cout << "Enter the address for student"<< (i + 1)<<": ";
        cin >> student[i].add;
        cout << "<----------------------->" << endl;
    }

    ofstream myfile;
    myfile.open("data.txt");
    if (myfile.is_open()){
        struct stData temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++){
                if (((student[i].name).compare(student[j].name)) > 0){
                    temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
                }
            }
        }

            for (int i = 0; i < n; i++)
            {
                myfile << student[i].name << "\n";
                myfile << student[i].roll << "\n";
                myfile << student[i].add << "\n";
            }
    }

    else{
        cout << "Error opening the file." << endl;
    }

    myfile.close();

    ifstream myfile1("data.txt");
    string line;
    if (myfile1.is_open())
    {
        while (getline(myfile1, line))
        {
            cout << line << endl;
        }
    }

    else{
        cout << "Error opening the file man!" << endl;
    }
    myfile1.close();
}
