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
    Employee e[5];
    e[0].setPara(1, 3400, 17,2021);
    e[1].setPara(2, 32434, 10,2021);
    e[2].setPara(3, 9878, 8,2021);
    e[3].setPara(4, 26362, 21,2021);
    e[4].setPara(5, 6567, 23, 2021);

    for (int i = 0; i < 5; i++)
    {
        e[i].showReport();
    }
        return 0;
}