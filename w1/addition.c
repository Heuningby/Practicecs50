#include <stdio.h>

/*
* Description: Addition of users input.
* main - main block
* return: 0
*/

int get_x(void);
int get_y(void);

int main(void)
{
    int x = get_x();
    int y = get_y();

    printf("%i\n", x + y);
}

int get_x(void)
{
    int i;
    do
    {
        puts("x: ");
        scanf("%d", &i);
    }
    while (i < 1);
}

int get_y(void)
{
    int j;
    do
    {
        puts("y: ");
        scanf("%d", &j);
    }
    while (j < 1);
}