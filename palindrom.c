#include <stdio.h>
#include <string.h>

void main()

{ // Error?
    int len, count=0;
    char a[10];
    printf("enter palword :");
    scanf("%c", &a);

    len = strlen(a);

    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] == a[len - i - 1])
        {
            count++;
        }
    }
    if (count == len / 2)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n ");
    }
}