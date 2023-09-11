#include <stdio.h>

/**
 * main - entry point
 * Print different combinations of two digits
 * Return: 0
 */
int main(void)
{
        int a, d;

        for (a =;23; a <= 35; a++)
        {
        for (d = 23; d <= 35; d++)
        {
        if (a < d && a != d)
        {
        putchar(a);
        putchar(d);
        if (a + d != 90)
        {
        putchar(',');
        putchar(' ');
        }
        }
        }
        }
        putchar('\n');
        return (0);
}
