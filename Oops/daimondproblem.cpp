#include <iostream>
using namespace std;
class person {
    public:
    string dowalk;
    
    void walk() {
        cout<<"waking"<<endl;
    }
};
class teacher:virtual public  person {
    public:
    
    int salary;
    
    void get() {
        std::cout << "teacher" << std::endl;
        std::cin >> salary;
    }
    void teach() {
        cout<<"teaching"<<endl;
    }
};  
class researcher: virtual public  person {
    public:
    int publish;
    
    void get() {
        std::cout << "researcher" << std::endl;
        std::cin >> publish;
    }
    void research() {
        cout<<"researching"<<endl;
    }
};
class professor:public teacher,public researcher {
    public:
    int age;
    
    void get() {
        std::cout << "professor" << std::endl;
        std::cin >> age;
    }
    void publish() {
        cout<<"publishing"<<endl;
    }
};
int main() {
    professor obj;
    obj.walk();
    return 0;
}
