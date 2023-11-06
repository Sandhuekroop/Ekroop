#include<stdio.h>
#include<conio.h>
int main()
{
    int x=2,y=0;
    int z=(y++)?y==1&&x:0;
    printf("%d",z);
    return 0;
}    

