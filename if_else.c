#include <stdio.h>

int main() 
{
    int a;
    int b;
    printf("enter the value of a :");
    scanf("%d", &a);
    printf("enter the value of b :");
    scanf("%d", &b);

    if (a < b)
    {
        printf("a is lesser then b ");
    } else {
        printf("b is lesser then a ");
    }
}