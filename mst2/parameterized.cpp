#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int a){
        x=a;
    }
    void disp(){
        cout<<"a="<<x;
    }
};
class B{
    int y;
    public:
    B(int b){
        y=b;
    }
    void show(){
        cout<<"b="<<y;
    }
};
class C: public B, public A{
    int z;
    public:
    C(int p, int q, int r):A(p), B(q){
        z=r;;
    }
    void disp_c(){
        cout<<"c="<<z;
    }
};
int main(){
    C obj(10,20,30);
    obj.disp();
    obj.show();
    obj.disp_c();


return 0;
}