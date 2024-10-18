#include<stdio.h>

void main(){                     //array
    int arr[]={17,90,1090,43};     //array creation

    printf("%d\n",arr[0]);

    arr[2]=56;                   //changing arry
    printf("%d\n",arr[2]);


    int list[]={12,6,13,56,1};   //loop through the array
    //int i;

    for(int i=0;i<5;i++){

        printf("%d\n",list[i]);
    }
    printf("*%lu\n",sizeof(arr));

    int length = sizeof(arr) / sizeof(arr[0]); //size of an arry ,size of an single element 

    printf("*%d\n", length);




}