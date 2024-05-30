#include<iostream>
using namespace std;
 class teacher{
        public:
        teacher()
        {
            cout<<"teacher"<<endl;
        }
        void teach()
        {
            cout<<"teaching"<<endl;
        }
    
 };

 class researcher
 {
        public:
        researcher()
        {
            cout<<"researcher"<<endl;
        }
        void research()
        {
            cout<<"researching"<<endl;
        }
 };

 class professor:public teacher,public researcher
 {
        public:
        professor()
        {
            cout<<"professor"<<endl;
        }
        void publish()
        {
            cout<<"publishing"<<endl;
        }
 };


int main()
{
    professor obj;
    obj.publish();
    return 0;
}