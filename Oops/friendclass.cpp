#include<iostream>
using namespace std;

class person {
    private:
        const string gfname="abc";
    public:
    string dowalk;
    
    void walk() {
        cout<<"waking"<<endl;
    }
    void  print()
    {
        cout<<gfname<<endl;
    }
    // friend class student;  //this is the friend class to access the private data member of the class
};

class student {
    public:
    void dowalk() {
        person obj;
        obj.walk();   
       
    }
    void getfrdgfname( person &obj) {  //this is the friend function to access the private data member of the class
       
        // cout<<obj.gfname<<endl;
       obj.print();
    }
};


int main() {
    person obj;
    student obj1;
    obj1.getfrdgfname(obj);
    return 0;
}