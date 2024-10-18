#include <stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("Enter the multiplicathion table number:");
    scanf("%d\n",&n);
    
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        
    }
    return 0;
}