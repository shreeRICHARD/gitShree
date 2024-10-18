#include <stdio.h>

int swap(int *x,int *y)
{
    int temp =*x;
    *x=*y;
    *y=temp;    
}                                                               

void main()
{

    int a = 3;
    int b = 5;
    printf("a:%d b:%d \n", a, b);

    swap(&a,&b);
    printf("a:%d b:%d \n", a, b);
    
    
}
