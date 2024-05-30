#include <iostream>
class A {
    public:
    int a;
        A() {
            std::cout << "A" << std::endl;
        }
    void Aget()
    {
        std::cout<<"A"<<std::endl;
        std::cin>>a;
    }
};
class B:public A {
    public:
    int b;
        B() {
            std::cout << "B" << std::endl;
        }
    void Bget()
    {
        std::cout<<"B"<<std::endl;
        std::cin>>b;
    }
};
class C:public B {
    public:
    int c;
        C() {
            std::cout << "C" << std::endl;
        }
    void Cget()
    {
        std::cout<<"C"<<std::endl;
        std::cin>>c;
    }
    int sum()
    {
        return a+b+c;
    }
};
int main() {
    C obj;
    obj.Aget();
    obj.Bget();
    obj.Cget();
    std::cout<<obj.sum()<<std::endl;
    return 0;
}
