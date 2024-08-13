#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int suba(int a, int b);
 
void p();
 
int main()
{
    int sum = suba(50, 40);
    printf("sum is:%d\n", sum);
    p();
    return 0;
}

int suba(int a, int b)
{
    return a - b;
}

void p(){
    printf("=================");
}