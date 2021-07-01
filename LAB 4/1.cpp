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
            
            if(amORpm == "AM" && t.amORpm == "AM")
                temp.amORpm = "AM";
            else if(amORpm == "PM" && t.amORpm == "PM")
                temp.amORpm = "AM";
            else
                temp.amORpm = "PM";

            temp.hrs = hrs + t.hrs;
            temp.min = min + t.min;  
            temp.sec = sec + t.sec;

            if(temp.sec >=60){
                temp.sec -=60;
                temp.min+=1;
            }
            if(temp.min >=60){
                temp.min -=60;
                temp.hrs+=1;
            }
            if(temp.hrs > 12 && temp.hrs<=24)
                temp.hrs -= 12;
            if(temp.hrs > 24)
                temp.hrs -= 24;
            return temp;
        }

        

        void twelveHrFor(){
            if(amORpm == "AM" || amORpm == "PM"){
                if(hrs >= 24)
                    hrs = hrs -12;
                cout<<"Time in 12-hr format: "<<endl;
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
                cout<<"Time in 12-hr format: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<" "<<amORpm<<endl;
            }
        }

        void twentyFourHrFor(){
            if(amORpm == " "){
                if(hrs >=24)
                    hrs = hrs -24;
                cout<<"Time in 24-hr format: "<<endl;
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
                cout<<"Time in 24-hr format: "<<endl;
                cout<<hrs<<":"<<min<<":"<<sec<<endl;
            }
            
        }
};


int main()
{
    Time t1(2,50,12,"AM"), t2(7,50,45,"PM"), t3;
    t3 = t2.add(t1);
    t3.twelveHrFor();
    t3.twentyFourHrFor();
    return 0;
}



