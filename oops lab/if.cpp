#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int pri = 1;
        while (pri <= i)
        {
            cout << pri;
            pri++;
        }
        int pr2 = i;
        while (pr2 != 0)
        {
            cout << --pr2;
        }
        while (i <= n)
        {
            int space = n - i;
            while (space)
            {
                cout << " ";
                space--;
            }

            // int num = 1;
            // int pr = i;
            // while (num <= n - i + 1)
            // {
            //     cout << pr;
            //     pr++;
            //     num++;
            // }

            cout << endl;
            i++;
        }
    }
        return 0;
}