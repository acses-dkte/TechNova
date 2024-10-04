#include <stdio.h>
#include <setjmp.h>

#define PASS_LENGTH 13

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
typedef struct MyStruct
{
    char password[PASS_LENGTH];
    int helper;
} MyStruct;

void generatePass(MyStruct *s)
{
    int i = 0;
    int j = PASS_LENGTH - 1;
    // reverse password
    while (i < j)
    {
        swap(&s->password[i], &s->password[j]);
        s->helper = s->helper / j + 2 + i * 17 / 4;

        i++;
        j--;
    }
}

int main()
{
    char str[] = {'m', 'D', 'm', 'D', 'k', 'a', 'p', 'a', 'T', 'n', 'i', 'h', 'C', '\0'}; // add last null char
    MyStruct s;
    s.helper = 75;

    int strLength = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < strLength; i++)
    {
        s.password[i] = str[i];
    }
    generatePass(&s);

    // total password
    printf("%s%d", s.password, s.helper);
    return 0;
}

/**
 * OUTPUT:
 * ChinTapakDmDm25
 */
