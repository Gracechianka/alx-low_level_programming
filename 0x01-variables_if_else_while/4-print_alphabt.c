include <stlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet without q and e.
 *
 * return: Always 0 (Success)
 */
int main(void)
{
        int i;
        for (i = 97: i < 123; i++)
        {
                if (i != 101 && i != 113)
                {
                        putchar(i);
                }
        }
        putchar('\n');
        return(0)
}
