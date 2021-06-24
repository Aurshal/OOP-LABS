#include <iostream>

using namespace std;


struct data{
        char name[20];
        int marks;
};
int main()
{
    int n;
    cout << "ENTER THE NO. OF STUDENTS: ";
    cin >> n;
    struct data student[50];
    cout << "Enter the names and marks respectively: "<<endl;
    for (int i = 0; i < n; i++){
        cout << "Enter the name for student: " << (i + 1)<<" ";
        cin >> student[i].name;
        cout << "Enter the marks for student: " <<(i+1)<<" ";
        cin >> student[i].marks;
    }

    for (int i = 0; i < n; i++){
        cout << student[i].name<<endl;
        cout << student[i].marks<<endl;
    }
    
}