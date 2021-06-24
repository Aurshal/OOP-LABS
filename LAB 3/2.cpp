#include<iostream>
using namespace std;

class Prime{
    private:
        int num;

    public:
        void getInput();
        void checkPrime(int n);
};

void Prime::getInput(){
    char check;
    do{
        cout << "Number to check: ";
        cin >> num;
        checkPrime(num);
        cout << "Check more? 'y' for yes and 'n' for NO" << endl;
        cin >> check;
    } while (check == 'y');
}

void Prime::checkPrime(int n){
    int div=0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            div++;
    }

    if(div > 2)
        cout << n << " is not a prime number."<<endl;
    else
        cout << n << " is a prime number."<<endl;
}

int main()
{
    
    Prime p;
    p.getInput();
    return 0;
}