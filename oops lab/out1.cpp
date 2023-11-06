#include <iostream>
#include <string.h>
using namespace std;
class book
{
private:
    int i = 1;
    char title[30];
    char author_name[30];
    int quantity, price;
    bool nextbook;
    // char y, n;

public:
    void inputdata()
    {
        cout << flush;
        cout << "enter title of the book";
        cin >> title;
        // cout<<title;
        cout << "enter author_name   ";
        cin >> author_name;
        // cout <<  author_name << endl;
        cout << "enter quantity amd price ";
        cin >> quantity >> price;
        // cout<<quantity<<price;
        cout << "any more books [y/n] :" << endl;
        cin >> nextbook;
        if (nextbook == 'y')
        {
            //  int arr[]=new;
            int books[100];
            // out << "Book details:" << endl;
            i=i+1;
{
        
               books[i].inputdata();
            }
            if (nextbook == 'n')
            {
                return;
            }
            else
            {
                cout << "invalid data provided";
            }
            }    }
    };
    int main()
    {
        int i;
        book s1;
        // book book[i];
        s1.inputdata();
    }