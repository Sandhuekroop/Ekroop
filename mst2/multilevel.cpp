#include<iostream>
using namespace std;
class A{
    
    public:

    void disp(){
        cout<<"hello"<<endl;
    }
};
class B: public A{
    
    public:

    void disp_b(){
        disp();
        cout<<"welcome"<<endl;
    }
};
class C: public B{
    
    public:
    
    void disp_c(){
        cout<<"child"<<endl;
        
        }
};
int main(){
    C obj;
    
    obj.disp_b();
    obj.disp_c();


return 0;
}