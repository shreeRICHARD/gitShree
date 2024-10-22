#include <stdio.h>
#include <stdlib.h>

char main() {
    char *p;

    p=malloc(15 *sizeof(20));

    if (p ==NULL)
    {
        printf("memory could't allocate");
    }
    else{
        strcpy(p,"pointer unsing malloc");
    }
    printf(p);
    free(p);
}
