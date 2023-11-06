#include <iostream>
#include<string.h>  
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
        cout<<flush;
        cout << "enter name of the student";
        cin>>name;
        cout << "enter branch   ";
  cin>>branch;
        cout << "enter rollno ";
        cin >> rollno;
        cout<<flush;
    }
    void showdata()
    {
        cout << "name of student is  " << name << endl;
        cout << "name of branch is  " << branch << endl;
        cout << "rollno is " << rollno<<endl;
    }
};
int main()
{
    int i;
    student s[5];
    for (i = 0; i < 5; i++)
    {
        s[i].inputdata();
    }
     for (i = 0; i < 5; i++)
     {
    s[i].showdata();
    }
// student s1,s2;
// s1.inputdata();
// s2.inputdata();
    return 0;
}
