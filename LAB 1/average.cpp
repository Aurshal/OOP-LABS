#include <iostream>
using namespace std;

int main(){
    int yM[20][12];
    int totalYears;
    double avg;
    double sum {0};
    cout << "Enter the years: " << endl;
    cin >> totalYears;

    for (int i = 0; i < totalYears; i++){
        cout << "Enter the expenditure for year " << (i+1) << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter the data for month " << (j + 1) << ": ";
            cin >> yM[i][j];
            sum += yM[i][j];
        }
    }
    avg = sum / totalYears;
    
    cout<< "Your expenditure are: " << endl;
    for (int i = 0; i < totalYears; i++){
        cout << "Your expenditure for year " << (i+1) << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "Your expenditure for month " << (j + 1) << ": ";
            cout << yM[i][j]<<endl;
        }
    }
        cout<<"Your total sum is: " << sum<<endl;
        cout << "Your yearly average expenditure is: "<< avg<<endl;
}