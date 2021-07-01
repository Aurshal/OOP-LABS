#include<iostream>
using namespace std;


class Department{
    private:
        int id;
        std::string name;


    public:
        Department(int i, string n): id(i), name(n){
            cout<<"Constructor called"<<endl;
        }
        ~Department(){
            cout<<"Object d goes out of scope"<<endl;
        }
};
int main()
{
    Department d(123,"Kushal");
    cout<<"Exiting from main function..."<<endl;
    return 0;
}