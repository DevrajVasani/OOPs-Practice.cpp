#include<iostream>
using namespace std;
class vehicle{
    public:
        
        string company;
        int wheels;
        int fuelCapacity;
        int pax;
        
        
};
class engine : public vehicle{
    public:
        string manufacturer;
        float cc;
        int pistons;
        int maxRpm;

        
};
int main(){
        engine v1; // v1 have a data members of parent class vehicle because v1 is a object of child class;
       
        v1.fuelCapacity=13; // fuelCapacity is a data member of vehicle class but still use by object(v1) of engine class beacuse vehicle class was inherited by engine class
        cout<<"Fuel Capacity: "<<v1.fuelCapacity<<endl;
}

