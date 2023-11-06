#include <iostream>
using namespace std;
class person
{
    int id;
    char name[20];

public:
    void get_p()
    {
        cout << "enter id";
        cin >> id;
        cout << "enter name";
        cin >> name;
    }
    void disp_p()
    {
        cout << "id=" << id << endl;
        cout << "name=" << name;
    }
};
class student : private person
{
    int fee;
    char course[10];

public:
    void get_s()
    {
        get_p();
        cout << "fee";
        cin >> fee;
        cout << "course" << endl;
        cin >> course;
    }
    void disp_s()
    {
        disp_p();
        cout << "fee=" << fee << endl;
        cout << "course=" << course;
    }
};
int main()
{
    student obj;
    obj.get_s();
    obj.disp_s();

    return 0;
}