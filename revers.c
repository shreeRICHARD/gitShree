#include<stdio.h>

void main(){

    int num,len;                      //Error
    printf("Enter an integer: ");
    scanf("%d", &num);

    len=strlen(num);

    for(int i=0;i<num;i++){

        printf(i+1,"\n");

    }




}