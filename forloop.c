#include <stdio.h>

void main(){

    int a;

    printf ("Enter value for a: ");
    scanf("%d",&a);

    for (int i=0; i<a; i++){
        for (int j=0; j<i; j++){
            printf ("#");
        }
        printf("\n");
    }

    for (int i=a; i>0; i--){
        // i = 4, a = 5 
        for (int j=0; j<i; j++){
            printf("*");
        }
        for(int j = 0; j<a-i; j++){
            printf("#");
        }
        for(int j = 0; j<a-i-1; j++){
            printf("#");
        }
        printf("\n");
    }
    for (int i=1; i<a; i++){
        printf("*");
        for (int j=0; j<i; j++){
            printf("*");
        }
        for (int j=1; j<a-i; j++){
            printf("#");
        }
        for (int j=1; j<a-i-1; j++){
            printf("#");
        }
        printf("\n");

    }


    for (int i=a; i>0; i--){
        // i = 4, a = 5 
        for (int j=0; j<i; j++){
            printf("%d",j);
        }
        for(int j = 0; j<a-i; j++){
            printf("%d",j);
        }
        for(int j = 0; j<a-i-1; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i=1; i<a; i++){
        // printf("*");
        for (int j=0; j<i; j++){
            printf("%d",j);
        }
        for (int j=1; j<a-i; j++){
            printf("%d",j);
        }
        for (int j=1; j<a-i-1; j++){
            printf("%d",j);
        }
        printf("\n");

    }
}
//0,0 
//1,0
//
//
//

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
         
// *********
// ****#**** 
// ***###***
// **#####**
// *#######*
// **#####**
// ***###***
// ****#****
// *********