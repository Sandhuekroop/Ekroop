
#include <iostream>
using namespace std;

class book
{
private:
    char nextbook;
    char title[100];
    char author_name[100];
    int quantity, price, amount;
    // int count=0;

public:
    void inputdata()
    {

        cout << "enter title of the book" << endl;
        cin >> title;
        cout << flush;
        cout << "enter author_name   ";
        cin >> author_name;

        cout << "enter quantity amd price ";
        cin >> quantity >> price;

        cout << "any more books [y/n]:";
        cin >> nextbook;
    }
    char no()
    {

        return nextbook;
    }
    int amt()
    {
        amount = quantity * price;
        return amount;
    }

    int tot()
    {
        int tot = tot + amount;
        return tot;
    }
    int display()
    {
        cout << "\t\t" << title
             << "\t\t" << author_name
             << "\t\t" << quantity
             << "\t\t" << price
             << "\t\t" << amount << endl;
    }
};

int main()
{
    int i, count = 0;
    book d[100];
    d[0].inputdata();

    for (i = 0; i < 100; i++)
    {
        d[i].inputdata();
        count++;
        d[i].amt();
        d[i].tot();
        count++;
        if (d[i].no() != 'y')
        {
            break;
        }
    }
    cout << "\t\t\t\t Himalyan BOOK WORLD" << endl;
    cout << "\t\t\t \t\t\tS.R.NAGAR" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t Title"
         << "\t\tAuthor"
         << "\t\tQTY"
         << "\t\t Price"
         << "\t\t AMOUNT" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    for (int j = 0; j <=count; j++)
    {
        d[j].display();
    }
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\tTotal Bill Amount:\t\t\t\t\t\t" << d[i].tot();

    return 0;
}
