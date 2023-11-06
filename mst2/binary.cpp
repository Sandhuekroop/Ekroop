#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    test()
    {
        a=0;
        b=0;
    }
    test(int x, int y){
        a = x;
        b = y;
    }
    void disp(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
 test operator+(test t){

 
 test temp;
 temp.a=t.a+a;
 temp.b=t.b+b;
 return temp;
 }


};
int main(){
    test t1,t2,t3;
    t1=test(2,4);
    t2=test(3,5);
    t3=t1+t2;
    t3.disp();

return 0;
}