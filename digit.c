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

int main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

   
    int digits = findDigits(number);
    printf("The number of digits in %d is: %d\n", number, digits);

    return 0;
}
