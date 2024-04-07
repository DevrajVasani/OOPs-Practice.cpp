#include<iostream>
using namespace std;
class person{
    private:
        long long int id; //long long int for 12 digit value
        long long int pass; 
    public:
        string name;
        int mo;
    
    long long int getid(){ // getter function for get private variable ID
        return id;
    };

    long long int getpass(){ // getter function for get private variable pass
        return pass;
    };

    void setid(long long int id){ // setter function for set private variable ID
        this->id=id;
        cout<<"New ID Set"<<endl;
    };

    void setpass(long long int pass){ // setter function for set private variable pass
        this->pass=pass;
        cout<<"New Password Set"<<endl;
    };
};
int main(){
    person p;
    p.setid(210200107020);
    p.setpass(210200107020);
    cout<<p.getid()<<endl;
    cout<<p.getpass()<<endl;
}