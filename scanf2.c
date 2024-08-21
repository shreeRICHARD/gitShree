#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

   
    printf("Enter your name: ");
    scanf("%19s", name);  // %19s to limit input to 49 characters

    printf("Enter your age: ");
    scanf("%d", &age);    // %d for integer input

    printf("Enter your height in meters: ");
    scanf("%f", &height); // %f for floating-point input

    
    printf("\nHello, %s!\n", name);
    printf("You are %d years old and %.2f meters tall.\n", age, height);

    return 0;
}
