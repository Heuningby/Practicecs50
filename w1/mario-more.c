#include <stdio.h>
/*
* Description: Builds right aligned pyramid with users input between 1 and 8.
* main - main block
* return: 0
*/

int main(void)
{
    int n;
    do
    {
        do 
        {
            puts(" Height: ");
            scanf("%d", &n);
        }
        while (n < 1);
    }
     while ( n > 8);

    for ( int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int h = -1; h < i; h++)
        {
             printf("#");
        }
       printf(" ");
       for (int g = -1; g < i; g++)
       {
            printf("#");
       }   
       printf("\n");
    }
}
