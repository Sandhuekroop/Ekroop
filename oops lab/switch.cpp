#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
    char choice;
    printf("please enter your selection");
    choice=getch();


switch (choice)
{
case '1':
    printf("Selection is 1");
    break;
case '2':
    printf("Selection is 2");
    break;
case '3':
    printf("Selection is 3");
    break;

case 'E':
case 'e':
printf("selection is exit");
break;
    

default:
printf("Unknown Selection");
    break;
}
return 0;
}