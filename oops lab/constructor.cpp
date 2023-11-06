#include<iostream>
using namespace std;
class perimeter
{
    public:
    int l,b;
    public:
    int calculate(int,int);
    perimeter()
    {
        l=12;
        b=23;
        cout<<"this is the comstructor1"<<endl;
    }
    perimeter(int p){
        l=p;
        b=10;
        cout<<"this is comstructor 2"<<endl;
    }
    // perimeter(int q)
    // {
    //     l=3;
    //    b=q;
    //     cout<<"this is constructor 3"<<endl;
    // }
        perimeter(int p,int q)
        {
            l=p;b=q;
            cout<<"this is constructor 3"<<endl;
        }

        };
        int perimeter::calculate(int x,int y)
 {
    l=x;
    b=y;
    return(2*l+2*b); 
}   
int main()
{
    int x,y;
    cout<<"enter the length and breadth";
    cin>>x>>y;
    perimeter obj;
    cout<<"perimeter is"<<obj.calculate(10,10)<<endl;
    perimeter obj1(10);
    cout<<"perimeter is "<<obj1.calculate(x,10)<<endl;
    // perimeter obj2(3);
    // cout<<"perimeter is:"<<obj2.calculate(3,y);
    perimeter obj3(x,y);
    cout<<"perimeter is"<<obj3.calculate(x,y);
    return 0;
}