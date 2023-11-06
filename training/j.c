#include<stdio.h>
#include<stdlib.h>
 
 int *functionDangling()
 {
    int a,b,sum;
    a=34;
    b=364;
    sum=a+b;
    return &sum;
 }
 int main()
 {
    // case1: de allocation of a memory block 
    int *ptr=(int *)malloc(7* sizeof(int));
    ptr[0]=34;
    ptr[1]=4;
    ptr[2]=5;
    ptr[3]=23;
    free(ptr);
//pointer is now a dangling pointer

// case 2:function returning local variable address
int *dangPtr=functionDangling();//dangPtr is now a dangling pointer
int*danglingPtr3;
// CASE 3: if a variable goes out of scope 
{
int a=12;
danglingPtr3= &a;
 }

    return 0;


}
