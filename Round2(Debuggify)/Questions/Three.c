#include <stdio.h>
#include <setjmp.h>
#define PASS_LENGTH 13

void swap(char *a, char *b)
{
    char *temp = a;
    a = b;
    b = temp;
}
typedef struct MyStruct
{
    char password[PASS_LENGTH];
    int helper;
} MyStruct;

void generatePass(MyStruct s)
{
    int i = 0;
    int j = PASS_LENGTH - 1;
    // reverse the password
    while (i > j)
    {
        swap(s.password[i], s.password[j]);
        s.helper = s.helper / j + 2 + i * 17 / 4;

        i--;
        j++;
    }
}

int main()
{

    char str[] = {'m', 'D', 'm', 'D', 'k', 'a', 'p', 'a', 'T', 'n', 'i', 'h', 'C', '/0'};
    MyStruct s;
    s.helper = 75;

    int strLength = sizeof(str[0]) / sizeof(str);
    for (int i = 0; i < strLength; i++)
    {
        s.password[i] = str[i];
    }
    generatePass(s);

    // Final password
    printf("%s%s", s.password, s.helper);
    return 0;
}