#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
    void get(int x , int y){
        a=x;
        b=y;

    }
    void disp(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
 void operator-(){
    a=-a;
    b=-b;

 }
};
int main(){
    test t1;
    t1.get(2,-10);
    t1.disp();
    -t1;
    t1.disp();

return 0;
}