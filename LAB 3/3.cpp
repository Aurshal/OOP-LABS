#include<iostream>
using namespace std;


class CarPark{
    private:
        int id;
        int rate;
        float time;

    public:
        void setData(){
            cin >> id;
            cin >> rate;
            cin >> time;
        }

        float calCharges(){
            float charge = rate * time;
            return charge;
        }

        void showData(){
            cout << "Car id: " << id << endl;
            cout << "Rate: " << rate << " per hour" << endl;
            cout << "Time in hours: "<<time << endl;
            cout << "Your total charge: " << calCharges() << endl;
        }
};

int main()
{
    CarPark c1;
    c1.setData();
    c1.showData();
    return 0;
}