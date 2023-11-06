#include<iostream>
using namespace std;
class person{
    int  id;
    public:
    void get(){
cout<<"enter id";
cin>>id;

    }
    void disp(){
        cout<<"id="<<id<<endl;
    
    }
};
class teacher: public person{

    char subject[10];
    public:
    void get_t(){
        get();
        
        cout<<"subject"<<endl;
        cin>>subject;
    }
    void disp_t(){
        disp();
    
        cout<<"subject"<<subject;
        }
};
class student : public person{

    char branch[10];
    public:
    void get_s(){
    get();
        
        cout<<"branch"<<endl;
        cin>>branch;
    }
    void disp_s(){
        disp();
    
        cout<<"branch:"<<branch;
        }
};
int main(){
    student  t;
    t.get_s();
    t.disp_s();


return 0;
}