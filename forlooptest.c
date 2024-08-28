#include <stdio.h>

void pattern(int  n){
    
}

void main()
{
    for (int n = 2; n < 40; n++){
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    
}
    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int i = 1; i < 6; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


//     for (int i = 5; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("(%d,%d) ",i,j);
//         }
//         printf("\n");
//     }
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("(%d,%d) ",i,j);
//         }
//         printf("\n");
//     }
// }



// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *
