#include <string.h>
#include <stdio.h>

int main(void) 
{
    int cardno;
    int length;
    char testing[16];
    do
    {
        do
        {
            printf("Number:");
            scanf("%d", &cardno);
            sprintf(testing, "%d", cardno);
            length = strlen(testing);
        } 
        while (&testing < 1);
    } 
    while (&testing > 16);
    
    printf("Valid\n");
}