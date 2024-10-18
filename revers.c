#include<stdio.h>

int reverse(int num) {
    
    
    // 12345
    int r = 0;
    while  (num != 0){
        r = (r*10)+ num%10;
        num = num/10;
    }

    return r;

}


void main(){

    int num,len;                      //Error
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf ("%d", reverse(num));

}