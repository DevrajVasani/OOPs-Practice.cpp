#include<iostream>
using namespace std;

class animal{
    public:
        string color;

        void barking(){
            cout<<"Barking...";
        };
};

class human{
    public:
        string color;

        void speaking(){
            cout<<"Speaking...";
        };
};

class hybrid : public animal, public human{ // multi-level inheritance
    
};

int main(){
    hybrid h;
    
    h.barking();
    cout<<endl;
    h.speaking();
}