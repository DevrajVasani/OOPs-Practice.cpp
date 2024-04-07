#include<iostream>
using namespace std;
class Base
{
    public:
    // int id = 10;
    void virtual Dis()
    {
        cout<<"This is Base"<<endl;
    }

};
class derived : public Base{
    public:
    void Dis(){
        cout<<"this is dervied"<<endl;
    }
};
int main(){
    
    Base *b1;
    derived d1;
    b1 = &d1;

    b1->Dis(); 
    
    return 0;
}