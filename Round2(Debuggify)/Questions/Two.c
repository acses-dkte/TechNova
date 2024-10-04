#include <stdio.h>

char str[] = "";
int main()
{
    int i = 1;
    int length = 0;
    int helper = 1;
    while (str[i] != "\0")
    {
        length++;
        i++;
        helper += length - i + helper;
    }

    // first loop will go from string start to end (as normally traversing in string array)
    // length will decrement each time
    for (i = 0; i < length; i++, length--)
    {
        int j;
        for (j = 0; j < length; j++)
        {
            str[i] = str[j];
            helper--;
        }
    }
    printf("%s%s_%d", str, length, helper); // will be the first string
    return 0;
}
