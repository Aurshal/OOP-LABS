#include <iostream>
using namespace std;

class Demo{
    private:
        int serNum;
        static int count; //static data member
    public:
        Demo(){
            count++;
            serNum = count;
        }
        
        void showSerNum(){
            cout<<"Serial num for object d"<<(serNum)<<": "<<serNum<<endl;
        }

        static void totalObjCount(){
            cout<<"Total no. of objs created: "<<count<<endl;
        }
};

int Demo::count = 0;


int main(){
    Demo d1,d2, d3;
    Demo::totalObjCount(); //use of static member function
    d1.showSerNum(); 
    d2.showSerNum();
    d3.showSerNum();
}