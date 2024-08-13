#include <stdio.h>

int add(int x, int y)
{
    return (x + y);
}
int sub(int x, int y)
{
    return (x - y);
}
int mul(int x, int y)
{
    return (x * y);
}
int div();

int main()
{
    int sum = add(200, 180);
    int sum1 = sub(200, 180);
    int sum2 = mul(20, 10);
    int sum3 = div(20, 300);

    printf("addition :%d\n", sum);
    printf("Subtraction :%d\n", sum1);
    printf("multiplication :%d\n", sum2);
    printf("division :%d\n",sum3);
}

int div(int x, int y)
{
    return (x & y);
}
