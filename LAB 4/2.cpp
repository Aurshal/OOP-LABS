#include<iostream>
#include <cstring>
using namespace std;

char* concat(char*, char*);

class Con{
    private:
        char* text{NULL};

    public:
        //default constructor
        Con(){
            text = new char [1];
            text[0]= '\0';
        }

        //constructor with argument
        Con(char* str){
            text = new char[strlen(str)+1];
            strcpy(text,str);
        }

        //copy constructor
        Con(const Con &source){
            text = new char[1];
            text[0] = '\0';
            strcpy(text, source.text);
        }

        //destructor
        ~Con(){
            delete [] text;
        }

    void join(Con p, Con q){
        text = concat(p.text,q.text);
    }

    void show(){
        cout<<text<<endl;
    }
};

int main(){
    Con o1((char*)"Engineers are"); 
    Con o2((char*)"Creatures of logic");
    Con o3;
    o3.join(o1, o2);
    o3.show();
    return 0;
}

//own function for the concatenation of two string
char* concat(char* n, char* s){
    size_t i = 0;
    size_t j = 0;
    while(*(n+i)!='\0'){
        i++;
    }
    size_t size_of_first_word {i};
    
    while(*(s+j)!='\0'){
        i++;
        j++;
    }
    char* temp = new char[i+2];

    temp[size_of_first_word] = ' ';

    size_t m = 0;
    for(size_t k = 0; k<i; k++){
        if(k >= 0 and k < size_of_first_word){
            temp[k]= *(n+k);
        }
        else{
            while(*(s+m)!='\0'){
                temp[k+1] = *(s+m);
                m++;
                k++;
            }
        }         
    }
    return temp;
}
