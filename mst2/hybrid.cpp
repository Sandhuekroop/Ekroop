
#include<iostream>
using namespace std;
class A{
    
    public:
    void get_a(){
        cout<<"hello";
    }


};
class B:public A{
    
    public:

    void get_b(){
        get_a();
        cout<<"welcome";
    }
};
class C: public A{
    
    public:
    
    void get_c(){
        cout<<"child"<<endl;
        
        }
};
class D: public B, public C{
    
    public:
    
    void get_d(){
        cout<<"hyperlink"<<endl;
        
        }
};
int main(){
    D obj;
    
    obj.get_d();
    obj.get_b();
    obj.get_c();
return 0;
}