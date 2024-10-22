#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *nptr;

    nptr = calloc(15, sizeof(int));     /*s*/
    nptr=realloc(nptr,100 *sizeof(int));
    if (nptr == NULL)
    {
        printf("can't allocate memory");
    }
    else
    {
        printf("enter the pointer number:");
        scanf("%d", nptr);

        printf("address :%p,data:%d\n", (void*)nptr, *nptr);

        free(nptr);
    }
}