#include<iostream>
using namespace std;
class A{
    int price,item;
    public:
    A(int a,int b){
        price=a;
        item=b;

    }
    A(A &t){
        price=t.price;
        item=t.item;
    }
    void disp(){
        cout<<"Price : "<<price<<endl;
        cout<<"Item  : "<<item<<endl;
    }
};
int main(){
    A t1(240,2);
    A t2(t1);
    t2.disp();

return 0;
}