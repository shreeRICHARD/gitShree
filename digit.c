#include <stdio.h>

int findDigits(int num) {
    int count = 0;  
    if (num == 0)
        return 1;

    if (num < 0)
        num = -num;

    while (num != 0) {
        num = num / 10; 
        count++;        
    }

    return count;      
}


int findNoD(int num) { 
    if (num == 0)
        return 1;

    if (num < 0)
        num = -num;

    return  1 + findNoD(num/10);
}


int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int digits = findDigits(number);
    int digits2 = findNoD(number);
    printf("The number of digits in %d is: %d, %d\n", number, digits, digits2);

    return 0;
}
