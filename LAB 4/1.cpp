#include<iostream>
using namespace std;

class Time{
    int hrs, min, sec;
    std::string amORpm;
    public:
        Time(int h = 0, int m = 0, int s = 0, std::string t = " "){
            hrs = h;
            min = m;
            sec = s;
            amORpm = t;
        }
        Time add(Time t){
            Time temp;
            temp.hrs = hrs + t.hrs;
            temp.min = min + t.min;
            temp.sec = sec + t.sec;
            return temp;
        }

        

        void twelveHrFor(){
            if(amORpm == "AM" || amORpm == "PM"){
                if(hrs >= 24)
                    hrs = hrs -12;
                cout<<"12-hr format time: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<" "<<amORpm<<endl;
            }
            else{
                if(hrs >= 0 && hrs<12){
                if(hrs == 0){
                    hrs = 12;
                }
                else
                    hrs = hrs;
                amORpm = "AM";
                }
                else if(hrs>=12 && hrs <=23){
                    if(hrs == 12)
                        hrs = 12;
                    else
                        hrs = hrs - 12;
                    amORpm = "PM"; 
                }
                if(hrs ==24)
                    hrs = hrs -12;
                else if(hrs > 24)
                    hrs = hrs - 24;
                cout<<"12-hr format time: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<" "<<amORpm<<endl;
            }
        }

        void twentyFourHrFor(){
            if(amORpm == " "){
                if(hrs >=24)
                    hrs = hrs -24;
                cout<<"The time in 24-hr format: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<endl;
            }
            else{
                if(amORpm == "AM"){
                if(hrs>=1 && hrs<=12)
                    hrs = hrs;
                if(hrs == 12)
                    hrs = 0;
                }
                else if(amORpm == "PM"){
                    if(hrs>=1 && hrs <=12){
                        if(hrs == 12)
                            hrs = 12;
                        else
                            hrs = 12+hrs;
                    }
                    if(hrs == 12){
                        hrs = 12;
                    }
                }
                cout<<"The time in 24-hr format: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<endl;
            }
            
        }

        void showTime(){
            cout<<"The time is: ";
            cout<<hrs<<":"<<min<<":"<<sec<<" "<<amORpm<<endl;
        }
};


int main()
{
    Time t1(1,26,12,"AM"), t2(2,23,45,"PM"), t3;
    t3 = t2.add(t1);
    t3.showTime();
    t1.twelveHrFor();
    t1.twentyFourHrFor();
    t2.twelveHrFor();
    t2.twentyFourHrFor();
    return 0;
}



