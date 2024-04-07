#include<iostream>
#include"hero.cpp"
using namespace std;
int main(){
    hero h1;
    h1.id=123456;
    h1.level='A';
    h1.health=55.5;

    cout<<h1.id<<endl;
    cout<<h1.level<<endl;
    cout<<h1.health<<endl;

}