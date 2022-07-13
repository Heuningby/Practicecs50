#include <string.h>
#include <stdio.h>

int main(void) 
{
    int cardno;
    do
    {
        do
        {
            // Prompts user for card number
            int cardno;
            printf("Number:");
            scanf("%d", &cardno);
            char testing[16];
            sprintf(testing, "%d", num);
            int length = strlen(testing);
        } while (length < 1);
    } while (length > 16);
    
    printf("Name length: %u\n", length);
}