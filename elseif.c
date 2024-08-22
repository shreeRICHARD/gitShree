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
    } else if(a > b){
        printf("b is lesser then a ");
    } else if(a==b){
        printf("both are equal");
    }
    else{
        printf("some thing error!");
    }
}