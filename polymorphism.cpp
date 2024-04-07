#include<iostream>
using namespace std;
class vehicle{
    public:
        
        string company;
        int wheels;
        int fuelCapacity;
        int pax;
        
        virtual void showInfo() const { // const means don't modify the object
            cout<<"**********************************************"<<endl;
            cout<<"Company of Vehicle: "<<company<<endl;
            cout<<"No. of Wheels: "<<wheels<<endl;
            cout<<"Fuel Capacity of Vehicle: "<<fuelCapacity<<" Ltr."<<endl;
            cout<<"Maximum Pax: "<<pax<<endl;
            cout<<"**********************************************"<<endl;
        }
};
class engine : public vehicle{
    public:
        string manufacturer;
        float cc;
        int pistons;
        int maxRpm;

        void showInfo() const override{
            cout<<"**********************************************"<<endl;
            cout<<"Company of Vehicle: "<<company<<endl;
            cout<<"No. of Wheels: "<<wheels<<endl;
            cout<<"Fuel Capacity of Vehicle: "<<fuelCapacity<<" Ltr."<<endl;
            cout<<"Maximum Pax: "<<pax<<endl;
            cout<<"**********************************************"<<endl;
            cout<<"manufacturer of engine: "<<manufacturer<<endl;
            cout<<"Cubic Capacity of engine: "<<cc<<endl;
            cout<<"No. of Pistons: "<<pistons<<endl;
            cout<<"Maximum RPM: "<<maxRpm<<endl;
            cout<<"**********************************************"<<endl;
        }
};
int main(){
        engine v1;// v1 have a data members of parent class vehicle because v1 is a object of child class;
       
        cout<<"Which company whehicle you have: "<<endl;;
        getline(cin,v1.company); // Use getline to read a string with spaces
        cout<<"No. of Wheels in Vehicle: "<<endl;
        cin>>v1.wheels;
        cout<<"Fuel Capacity of Vehicle: "<<endl;
        cin>>v1.fuelCapacity;
        cout<<"Maximum Pax: "<<endl;
        cin>>v1.pax;
        cin.ignore();
        cout<<"manufacturer of engine: "<<endl;
        getline(cin,v1.manufacturer); // Use getline to read a string with spaces
        cout<<"Cubic Capacity of Engine: "<<endl;
        cin>>v1.cc;
        cout<<"No. of Pistons in Engine: "<<endl;
        cin>>v1.pistons;
        cout<<"Maximum RPM of Enigne: "<<endl;
        cin>>v1.maxRpm;

        v1.showInfo(); //function call
}

