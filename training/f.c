#include<stdio.h>
#include<conio.h>

int main()
{
    char a[][10]={
        "error1\n",
    "error2\n",
    "error3\n",
    "error4\n"
    };
    *(*(a+1)+3)='y';
    printf("%c",*(*(a+1)+3));
    return 0;

}


