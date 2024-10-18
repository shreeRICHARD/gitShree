#include <stdio.h>
#include <string.h>

void main()

{ // Error?
    int len, count=0;
    char a[10];
    char b[10];
    printf("enter palword :");
    scanf("%s", a);
    printf("enter loc : ");
    int loc;
    scanf("%d",&loc);
    scanf("%s", &b[loc]);
    printf ("%c",b[loc]);

    len = strlen(b);

    for (int j=0; j<10; j++){
        printf ("i = %d -> b[%d] = %c \n",j,j,b[j]);

    }

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