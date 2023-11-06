#include <iostream>
#include <string.h>
using namespace std;
class book
{
private:
    char title[30];
    char author_name[30];
    int quantity, price;
    bool nextbook;
    char y,n;

public:
    void inputdata()
    {
        cout << flush;
        cout << "enter title of the book";
        cin >> title;
        cout <<  title << endl;

        cout << "enter author_name   ";
        cin >> author_name;
        cout <<  author_name << endl;
        cout << "enter quantity amd price ";
        cin >> quantity>>price;
        cout<<quantity<<price;
        cout<<"any more books [y/n] :"  <<endl;
        cin>>nextbook;
        if(nextbook==y)
        {
            inputdata();

        }
        if(nextbook==n){
        return;

        }
        else{
            cout<<"invalid data provided";
        }
         }

    void showdata()
    {
        cout << "title of book is  " << title << endl;
        cout << "name of author is  " << author_name << endl;
        // cout << "rollno is " << rollno<<endl;
        cout<<"the quantity and price is:"<<quantity<<price;
    }
};
int main()
{
    int i;
    book s[100];
    // for (i = 0; i < 5; i++)
    // {
        s[i].inputdata();
    // }
    // /
        s[i].showdata();
    // }
    // student s1,s2;
    // s1.inputdata();
    // s2.inputdata();
    return 0;
}
