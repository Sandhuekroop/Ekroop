
#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    // if(i<=4){
    //     if(j<=4)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<"\n";
    //     i++;
    // }
    while (i < 4)
    {
        int j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}