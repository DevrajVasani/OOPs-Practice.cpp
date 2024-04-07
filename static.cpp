#include<iostream>
using namespace std;
class hero{
    public:
        long long int char_id; //long long int for 12 digit value
        long long int pass;
        string name;
        char level;

        static int timeToComplete;
    
    
};

int hero::timeToComplete=5; // initializing an static data member outside the calss;
int main(){
    cout<<"Time to Complate the Game: "<<hero::timeToComplete<<endl; // call static data member without creating object;

    // we call static data member by creating object also...like below....

    hero h1;
    cout<<"Time to Complate the Game: "<<h1.timeToComplete<<endl;

}