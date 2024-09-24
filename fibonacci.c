#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, next;

    printf("Fibonacci sequence: %d, %d", a, b);
    for (int i = 3; i <= n; i++)
    {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}
int main()
{

    int n;

    printf("enter the tarms of num");
    scanf("%d", &n);

    if (n >= 2)
    {
        fibonacci(n);
    }
    else
    {
        printf("the terms should be least 2 num \n");
    }

    return (0);
}