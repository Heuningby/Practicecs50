#include <stdio.h>

/*
* Description: Division with integers, demonstrating truncation.
* main - main block
* return: 0
*/

int get_x(void);
int get_y(void);

int main(void)
{
    float x = get_x();
    float y = get_y();

    float z = x / y;
    printf("%f\n", z);
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