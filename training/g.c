#include<stdio.h>
#include<stdlib.h>
void num1()
{
    int i;
    for(i=1;i<=10;i++)
    {  printf("this is before exit\n");
        if(i==5){
       exit(0);
        }
        printf("%d\n",i);
    }
printf("this is after exit");
}
int main()
{
    num1();
// return 0;
    
}

