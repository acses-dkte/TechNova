#include <stdio.h>
char str[] = "";
int main()
{
    int i = 1;
    int length = 0;
    int helper = 1;
    // make it single quotes
    while (str[i] != '\0')
    {
        length++;
        i++;
        helper += length - i + helper;
    }

    length++; // increment length once
    for (i = 0; i < length; i++, length--)
    {
        int j;
        for (j = 0; j < length; j++)
        {
            str[i] = str[j];
            helper--;
        }
    }

    printf("%s%d_%d", str, length, helper); // check the format specifiers
    return 0;
}

/**
 * OUTPUT:
 * 0_0
 */
