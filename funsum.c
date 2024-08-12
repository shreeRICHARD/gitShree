#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub();

int main()
{
    int sum = add(20, 40);
    printf("sum is:%d",add);
    return 0;
}
int sub(int a, int b)
{
    return a - b;
}