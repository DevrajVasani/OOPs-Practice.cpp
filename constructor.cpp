#include<iostream>
using namespace std;

class engineer{

    private:
        long long pass;
    public:  

        engineer(){ // system created constructor will be autometically kill by self creating default constructor. 
            cout<<"***Counstructor Called......."<<endl; 
        }

        // parameterized constructor
        engineer(long long pass,long long enroll,string cource,char aptitute_level){
            this->enroll=enroll; // 'this' point to the current object's variable
                                 // Address of current object stored into 'this' 
                                 // here address of 'engineer'object is stored in 'this' 
            this->cource=cource;
            this->aptitute_level;

            // for private properties using setter
            setpass(pass);
        }

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

    engineer e1(210200107020,210200107020,"Diploma",'a'); // static object
    cout<<"e1:"<<endl;
    cout<<"Pass: "<<e1.getpass()<<endl;
    cout<<"Enroll No.: "<<e1.enroll<<endl;
    cout<<"Cource: "<<e1.cource<<endl;
    cout<<"Aptitute Level: "<<e1.aptitute_level<<endl;

    engineer e2(e1); // copy object(e1) into object(e2) using deafult copy constructor
    cout<<"e2:"<<endl;
    cout<<"Pass: "<<e2.getpass()<<endl;
    cout<<"Enroll No.: "<<e2.enroll<<endl;
    cout<<"Cource: "<<e2.cource<<endl;
    cout<<"Aptitute Level: "<<e2.aptitute_level<<endl;
    
    // engineer *e2=new engineer; //dynamic  object
}