#include <stdio.h>
/*
* Description: prints hello with users input.
* main - main block
* return:0
*/

int main(void)
{
    char name[40];
    puts("What's your name? ");
    scanf("%19s", name);
    printf("Hello, %s\n", name);

}