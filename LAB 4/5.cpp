#include <iostream>
using namespace std;

class Illus{
    private:
        std::string name;
        int age;

    public:
        Illus(){};
        Illus(std::string n, int a):name(n), age(a){};
        //non const mem function
        void setData(std::string n, int a){
            name = n;
            age = a;
        }

        //const mem function
        void getData() const{
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main(){
    //non const obj creation
    Illus p;
    //const obj creation
    const Illus q("Hari",45);

    //non-const obj and non-const mem function
    p.setData("Ram",23);

    //non-const obj and const mem function
    p.getData();

    //const obj and non const mem function
    // q.setData("Hari", 45); //error: we cannot edit the member values of const obj

    //const obj and const mem function
    q.getData();
}