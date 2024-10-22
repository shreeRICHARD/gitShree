#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *var;

   /* var = (char*)malloc(5); //memory allocation "we can allocate specific needed memory"

    realloc(var,10);// re-allocate the memory ,when allocated memory was*/

    var = (char*)calloc(100,100); // calloc have 2 arguments, num of elements & num of size (and it can initilation the value) it like malloc 

    
    strcpy(var,"hello guys welcome\n");

    printf("%s",var);
    

}   