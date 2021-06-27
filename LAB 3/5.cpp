#include<iostream>
using namespace std;

class Employee{
    private:
        int emp_id;
        int bonus;
        int overtime;
        int year;

    public:
        void setPara(int, int, int, int);
        void showReport();
};

void Employee::setPara(int id, int bonus, int overtime, int year){
    emp_id = id;
    this->bonus = bonus;
    this->overtime = overtime;
    this->year = year;
}

void Employee::showReport(){
    cout <<endl<< "Employee with id " << emp_id << " has recieved Rs " << bonus << " as bonus"
        << "\nand"
        << "\nhad worked " << overtime << " hours as a over time in year " << year << endl;
}


int main()
{
    int noE;
    cout<<"Enter the number of employees: ";
    cin>>noE;
    cout<<endl;
    int id, bonus, overtime, year;

    Employee *employee;
    employee = new Employee[noE];

    for(size_t i  = 0; i< noE; i++ ){
        cout<<"Enter the data for Employee "<<(i+1)<<": "<<endl;
        cout<<"Enter the id: ";cin>>id;
        cout<<"Enter bonus: ";cin>>bonus;
        cout<<"Enter overtime: ";cin>>overtime;
        cout<<"Enter year: ";cin>>year;
        employee[i].setPara(id, bonus, overtime, year);
        cout<<endl;

    }

    for (size_t i = 0; i < noE; i++)
    {
        cout<<"Report for Employee "<<(i+1)<<": "<<endl;
        employee[i].showReport();
    }
    delete [] employee;

    return 0;

}