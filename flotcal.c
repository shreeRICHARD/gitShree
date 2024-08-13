#include <stdio.h>

float add(float x,float y)
{
    return (x + y);
}
float sub(float x,float y)
{
    return (x - y);
}
float mul(float x,float y)
{
    return (x * y);
}
float div(float x,float y);

float main()
{
    float sum = add(20.0, 1.80);
    float sum1 = sub(10.30,8.10);
    float sum2 = mul(5.5,2.5);
    float sum3 = div(10.5,1.1);

    printf("addition :%f\n", sum);
    printf("Subtraction :%f\n", sum1);
    printf("multiplication :%f\n", sum2);
    printf("division :%f\n", sum3);
}

float div(float x,float y)
{
    return x/y;
}
