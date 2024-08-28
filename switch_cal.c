#include <stdio.h>
void main()
{

    float x;
    float y;
    char operator;
    printf("Enter the first number :");
    scanf("%f", &x);
    printf("Enter the second number :");
    scanf("%f", &y);
    printf("Enter the operator :");
    scanf("%f\n" &operator);

    switch (operator){
    case '+':
        printf("ans:\n", x + y);
        break;
    case '/':
        printf("ans:", x / y);
        break;
    case '*':
        printf("ans:", x * y);
        break;
    case '-':
        printf("ans:", x - y);
    }
}