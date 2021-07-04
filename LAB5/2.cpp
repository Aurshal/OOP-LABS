#include <iostream>
using namespace std;

class A{
    private:
        int a;
        int b;
    public:
        A(int n, int m): a(n), b(m){}
        void showData(){
            cout<<a<<","<<b<<endl;
        
        }
        friend class B;
};


class B{
    private:
        int c;
        int d;
    public:
        B(int n, int m): c(n), d(m){}

        friend class A;
        void showData(A); 
};

void B::showData(A p){
    cout<<p.a<<p.b<<endl;
}

int main(){
    A n(2,4);
    B m(2,5);
    m.showData(n);
    
}