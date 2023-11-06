#include<stdio.h>
#include<conio.h>

int main()
{
    char *a[]={"error1\n",
    "error2\n",
    "error3\n",
    "error4\n"};
    printf("%c",*(*(a+1)+3));
    return 0;

}


