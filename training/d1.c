#include <stdio.h>

/*global variables*/
int a,b;

/*function to set values to the global variables*/
void setValues()
{
a=100;
b=200;
}
int main()
{
/*local variables*/
int x,y;

x=10;
y=20;
setValues();

printf("a=%d, b=%d\n",x,y);
printf("x=%d, y=%d\n",a,b);

return 0;
}