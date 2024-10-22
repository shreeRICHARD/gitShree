#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *nptr;

    nptr = calloc(15, sizeof(int));

    if (nptr == NULL)
    {
        printf("can't allocate memory");
    }
    else
    {
        printf("enter the pointer number:");
        scanf("%d\n", nptr);

        printf("address :%d,data:%d", *nptr, nptr);

        free(nptr);
    }
}