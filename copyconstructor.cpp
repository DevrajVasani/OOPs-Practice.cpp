#include<iostream>
using namespace std;
class lawyer{
    private:
        int pass;
    public:
        string fname;
        string lname;
        long long id;

        void setpass(int pass){
            this->pass=pass;
        };
        
        int getpass(){
            return pass;
        };

        // Default Copy constructor made shellow copy
        
        lawyer(lawyer& temp){ // we must pass by refrense to avoid infinite looptrap, no pass by value allow
            this->fname=temp.fname;
            this->lname=temp.lname;
            this->id=temp.id;
            
            // get the private member variable pass from the source object
            this->pass=temp.getpass(); 
        };

};
int main(){
    lawyer l1;
    l1.fname="devraj";
    
}