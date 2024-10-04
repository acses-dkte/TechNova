#include <stdio.h>
#include "pass.h"
// don't care about header file
// this code only contains syntax and semantic errors

void getPassword(char *password)
{
    *password = SECRET_PASS; // SECRET_PASS is predefined "string" (char array)
}

int main()
{
    char *password;
    getPassword(&password);
    printf("Password: %s\n", password);
    return 0;
}
