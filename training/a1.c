#include <stdio.h>
#include <conio.h>
int func(int x, int y, int z)
{
    y = y + 1;
    z = z + x;
}
int main()
{
    int a = 2, b = 3;
    func(a + b, a, a);
    printf("%d", a);
    return 0;
}
