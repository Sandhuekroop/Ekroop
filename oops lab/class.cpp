#include<iostream>
using namespace std;


class student
{
    private:
    char name[30];
    char branch[30];
    int rollno;

    public:
    void inputdata()
    {
        cout << "enter name of the student ";
        gets(name);
        cout << "enter branch   ";
        gets(branch);
         cout << "enter rollno ";
        cin>>rollno;
        } 
void showdata()
{
    cout<<"name of student is  "<<name<<endl;
    cout<<"name of branch is  "<<branch<<endl;
    cout<<"rollno is "<<rollno<<endl;
}
};
int main()
{
    student ekroop;
    ekroop.inputdata();
    ekroop.showdata();
    return 0;
}
