#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int sum = sub(50, 40);
    printf("sum is:%d\n", sum);
    return 0;
}

int sub(int a, int b)
{
    return a - b;
}