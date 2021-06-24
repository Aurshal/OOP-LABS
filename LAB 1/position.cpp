#include <iostream>
using namespace std;


int main(){
    int ind = 0;
    char text[100] = "idea without execution is worthess";
    int i = 0;
    while (text[i] != 'c')
    {   
        i++;
    }

    cout << "the position is: " << (i+1) << endl;
}