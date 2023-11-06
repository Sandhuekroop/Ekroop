#include<iostream>
using namespace std;
class A{
    
    public:

    void disp(){
        cout<<"hello";
    }
};
class B{
    
    public:

    void disp_b(){
        cout<<"welcome";
    }
};
class C: public A, public B{
    
    public:
    
    void disp_c(){
        cout<<"child"<<endl;
        
        }
};
int main(){
    C obj;
    obj.disp();
    obj.disp_b();
    obj.disp_c();


return 0;
}