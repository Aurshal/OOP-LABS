#include<iostream>
using namespace std;

class Vehicles {
    private:
        int num_vehicle, hour, rate;

    public:
        Vehicles(int n, int h, int r): num_vehicle(n), hour(h), rate(r){}
        Vehicles(Vehicles& v){
            num_vehicle = v.num_vehicle;
            hour = v.hour;
            rate = v.rate;
        }
        void showData(){
            cout<<"No. of vehicles: "<<num_vehicle<<endl;
            cout<<"Rate per hr: "<<rate<<endl;
            cout<<"Time in hrs: "<<hour<<endl;
        }
        void calCost(){
            int cost;
            const float DISCOUNT = 0.1;
            if(num_vehicle>10)
                 cost = (hour * rate) - DISCOUNT * (hour * rate);

            else
                cost = hour * rate;

            cout<<"Total cost: "<<"Rs."<<(cost*num_vehicle)<<endl;
                
        }
};

int main()
{   
    Vehicles v(11,12, 5);
    Vehicles v1(v);
    v1.showData();
    v1.calCost();
    return 0;
}