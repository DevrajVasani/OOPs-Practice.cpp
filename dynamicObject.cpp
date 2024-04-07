#include<iostream>
using namespace std;

class engineer{
    private:
        long long pass;
    public:    
        long long enroll;
        string cource;
        char aptitute_level;

    void setpass(long long pass){
        this->pass=pass;    
    };
    long long getpass(){
        return pass;
    };
};

int main(){
    engineer *e=new engineer; // dynamic object use heap memory

    e->enroll=210200107020; // or we can write like   (*e).enroll=210200107020;
    e->cource="Degree";     // or we can write like   (*e).cource="Degree";
    e->aptitute_level='c';  // or we can write like   (*e).cource='c';

    cout<<"Enroll No.: "<<e->enroll<<endl;
    cout<<"Cource: "<<e->cource<<endl;
    cout<<"Aptitite Level: "<<e->aptitute_level<<endl;
}