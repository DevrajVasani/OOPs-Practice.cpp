// encapsulation is  data/information hiding
// increase code resusablity
// help in unit testing



#include<iostream>
using namespace std;

class lawyer{ // partially encapsulated class
    private:  // only access within current class (acess by getter/setter)
              // we can mark data member read only by only create getter
        int face_id_no;
        char Pass;
    protected:// access within current class & child Class
        long long user_id;
        string name;
    public:   // access publically
        char degree;
        float x;

};

class Administrator{ // fully encapsulated class reason??(all data members are private)
    private:
        int face_id_no;
        char pass;
        long long user_id;
        string name;
        char degree;
        float x;
};